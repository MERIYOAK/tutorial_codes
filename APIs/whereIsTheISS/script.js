document.addEventListener('DOMContentLoaded', () => {
    const locationElement = document.getElementById('location');

    fetch('https://api.wheretheiss.at/v1/satellites/25544')
        .then(response => response.json())
        .then(data => {
            const latitude = data.latitude;
            const longitude = data.longitude;

            const locationText = `Latitude: ${latitude}, Longitude: ${longitude}`;
            locationElement.textContent = locationText;
        })
        .catch(error => {
            console.error('Error fetching data:', error);
            locationElement.textContent = 'An error occurred while fetching data.';
        });
});
