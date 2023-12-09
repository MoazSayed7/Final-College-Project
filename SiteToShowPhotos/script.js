const API_KEY = "Replace With Your API";
const DRIVE_FOLDER_ID = "Replace With Your Folder ID";

const photoContainer = document.getElementById("gallery-container");

function fetchAndDisplayPhotos() {
  fetch(
    `https://www.googleapis.com/drive/v3/files?q='${DRIVE_FOLDER_ID}'+in+parents&key=${API_KEY}`
  )
    .then((response) => response.json())
    .then((data) => {
      photoContainer.innerHTML = "";

      data.files.forEach((file) => {
        const photoCard = document.createElement("div");
        photoCard.className = "gallery-item";



        const photoImg = document.createElement("img");
        photoImg.src = `https://drive.google.com/uc?id=${file.id}`;
        photoImg.loading = "lazy";

        photoCard.appendChild(photoImg);
        photoContainer.appendChild(photoCard);
      });
    })
    .catch((error) => console.error("Error fetching photos:", error));
}

fetchAndDisplayPhotos();
// Disable context menu
document.addEventListener('contextmenu', function (e) {
    e.preventDefault();
});

// Disable F12 key
document.addEventListener('keydown', function (e) {
    if (e.key === 'F12') {
        e.preventDefault();
    }
});


setInterval(fetchAndDisplayPhotos, 1 * 60 * 1000);
