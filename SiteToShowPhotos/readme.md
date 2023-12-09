# Photo Gallery Web App

This code is an HTML document with embedded JavaScript that creates a simple photo gallery web application. The gallery fetches images from a Google Drive folder using the Google Drive API and displays them in a responsive grid layout.

## Features

- **Responsive Design**: The gallery is designed to be responsive and adjusts its layout based on the screen size, providing an optimal viewing experience on different devices.

- **Image Hover Effect**: When you hover over an image, it scales up slightly, creating a visually appealing effect.

- **Automatic Image Refresh**: The gallery automatically refreshes its content at regular intervals (1 minute by default) to update with any new images added to the Google Drive folder.

- **Security Measures**: The script includes measures to disable the context menu and the F12 key to enhance security and prevent unauthorized actions.

## Setup

1. **Replace API Key and Folder ID**: Replace the placeholder values for `API_KEY` and `DRIVE_FOLDER_ID` in the JavaScript file with your own Google Drive API key and folder ID.

2. **Google Drive Permissions**: Ensure that the Google Drive folder containing the images has the appropriate permissions for the API key to access its content.

## Usage

- Open the HTML file in a web browser to view the photo gallery.
- Images are fetched from the specified Google Drive folder and displayed in a grid layout.
- Hover over an image to see the scaling effect.
- The gallery will automatically refresh at regular intervals to update with any changes in the Google Drive folder.

## Security Considerations

- The script disables the context menu and the F12 key to prevent users from accessing certain browser functionalities that could potentially compromise security.

## Dependencies

- This web app relies on the Google Drive API to fetch images from a specified folder.
