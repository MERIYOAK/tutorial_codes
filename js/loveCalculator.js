prompt("what so your name?");
prompt("what so your lover's name?");
var percentage = loveCalculator();
alert("The love between you and your lover is " + percentage + "% !");

function loveCalculator() {
 var n = Math.floor(Math.random() * 100) + 1;
 return n;
}