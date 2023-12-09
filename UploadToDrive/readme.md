# Google Drive Photos Uploader

This Python script utilizes the PyDrive library to upload photos from a local folder to Google Drive. The script authenticates with Google Drive using OAuth and then uploads each photo from the specified local folder to a designated folder in Google Drive.

## Prerequisites
- Python installed on your system.
- PyDrive library installed. You can install it using the following command:
  ```
  pip install PyDrive
  ```

## Usage

1. **Set Up Google Drive API:**
   - Visit the [Google Cloud Console](https://console.cloud.google.com/).
   - Create a new project or select an existing one.
   - Enable the Google Drive API for your project.
   - Create credentials (OAuth client ID) for a Desktop application and download the JSON file containing the credentials.

2. **Configure the Script:**
   - Replace `'Folder Path'` in the script with the local path of the folder containing the photos you want to upload.
   - Replace `'Folder ID in Google Drive'` with the ID of the Google Drive folder where you want to upload the photos. You can find the folder ID in the URL when you navigate to the folder in Google Drive.

3. **Run the Script:**
   - Execute the script using the following command:
     ```
     python code.py
     ```
   - The script will open a web browser for authentication. Follow the instructions to grant access to your Google Drive.

4. **Upload Process:**
   - The script will iterate through each photo in the local folder.
   - For each photo, it will create a corresponding photo in the specified Google Drive folder with the same name.
   - There is a 5-second delay (`sleep(5)`) between uploads to avoid rate-limiting issues.

5. **Completion:**
   - Once the script has processed all photos, it will terminate, and the photos should be available in the designated Google Drive folder.

**Note:** Make sure to keep your Google Drive API credentials secure and do not share them publicly.
