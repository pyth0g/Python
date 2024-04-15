import plyer
def notify(icon_path):
    plyer.notification.notify(
        title="Windows Defender",
        message=r'We detected Trojan.Malware.300983.Susgen in "C:\$Windows.~WS\Sources\Panther\diagwrn.xml"',
        timeout=5,
        app_icon=icon_path
    )