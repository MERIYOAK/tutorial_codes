function guestChecker(){
    var userName = prompt("what is your name?");
    var guestList = ["Angela", "Jack", "Pam", "James", "Lara", "Jason"];
    if (guestList.includes(userName)){
       alert("welcome beloved guest!");
    } else {
       alert("user seems suspicious!");
    }       
} 