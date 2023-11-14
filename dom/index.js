// Define the function to change the color
function toggleColor() {
    document.getElementById('btn').classList.toggle("red");
}

// Assign the function to the onclick event of the button
var button = document.getElementById('btn');
button.onclick = toggleColor;


