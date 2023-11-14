var userName = prompt("write you tweet.");
var firstLetter = userName.slice(0,1).toUpperCase();
var restLetters = userName.slice(1,userName.length);
alert("hello, " + firstLetter + restLetters + "!");