Do
	Set objWMIService = GetObject("winmgmts:\\.\root\cimv2")
	Set colProcess = objWMIService.ExecQuery("Select * from Win32_Process")
	strProgramToCheck = "cmd.exe"
	isProgramRunning = False
	For Each objProcess In colProcess
		If StrComp(objProcess.Name, strProgramToCheck, vbTextCompare) = 0 Then
			isProgramRunning = True
			Exit For
		End If
	Next
	If Not isProgramRunning Then
		Dim oShell
		Set oShell = WScript.CreateObject ("WScript.Shell")
		oShell.run "cmd /k title Unclosable & echo Can't Close Me" ,1 , true
		End If
Loop While True