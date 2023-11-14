function whosPaying(names) {
    var randomIndex = Math.floor(Math.random() * names.length);
    const selectedName = names[randomIndex];

    return selectedName + " is going to buy lunch today!";        
}

var names = ["Angela", "Jack", "Pam", "James", "Lara", "Jason"];
const output = whosPaying(names);
console.log(output);