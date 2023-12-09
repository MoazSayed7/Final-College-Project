from time import sleep
from pydrive.drive import GoogleDrive
from pydrive.auth import GoogleAuth

import os

gauth = GoogleAuth()

gauth.LocalWebserverAuth()
drive = GoogleDrive(gauth)


path = r"Folder Path"


for x in os.listdir(path):
    file_path = os.path.join(os.path.join(path, x))
    if os.path.isfile(file_path):
        f = drive.CreateFile(
            {'title': x, 'parents': [{'id': 'Folder ID in Google Drive'}]})
        f.SetContentFile(file_path)
        f.Upload()
        sleep(5)
        f = None
