import subprocess

class ProfileNotFoundError(Exception):
        def __init__(self,message) -> None:
            self.message = message

        def __str__(self) -> str:
            return self.message

class AllProfiles:
    def __init__(self) -> None:
        pass

    def __str__(self) -> str:
        return "AllProfiles"

class NoPassword:
    def __init__(self) -> None:
        pass

    def __str__(self) -> str:
        return "NoPassword"

class Profiles:
    def __init__(self) -> None:
        self.profiles = subprocess.run("netsh wlan show profile | findstr All",shell=True,stdout=subprocess.PIPE)

    @classmethod
    def passwd(cls,profile: str = AllProfiles) -> str:
        if profile == AllProfiles:
            net_name = cls().profiles.stdout.decode("utf-8").replace("    All User Profile     : ","").replace("\r","")[:-1].split("\n")
        else:
            net_name = [profile]

        for i in net_name:
            keys = subprocess.run(f"netsh wlan show profile {i} key=clear| findstr Key",shell=True,stdout=subprocess.PIPE)
            if "Key Content" in keys.stdout.decode("utf-8"):
                return (keys.stdout.decode("utf-8").replace("    Key Content            : ","").replace("\r","").replace("\n",""))
            elif "There is no such wireless interface on the system." in subprocess.run(f"netsh wlan show profile {i} key=clear",shell=True,stdout=subprocess.PIPE).stdout.decode("utf-8"):
                raise ProfileNotFoundError(f"Profile '{i}' not found.")
            else:
                return str(NoPassword())

    @classmethod
    def list(cls):
        return cls().profiles.stdout.decode("utf-8").replace("    All User Profile     : ","").replace("\r","")[:-1].split("\n")

keys = []

for i in ['net1','net2','net3']:
    try:
        keys.append((i, Profiles.passwd(i)))
    except ProfileNotFoundError: keys.append((i, f"Profile '{i}' not found."))

for i in keys:
    print(i[0])
    print(i[1])
    print("\n")
