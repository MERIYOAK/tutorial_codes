function beers() {
    var bottles = 99;
    while ( bottles > 1 ) {
     console.log( bottles + " bottles of beer on the wall, " + bottles + " bottles of beer.\nTake one down and pass it around, " + --bottles + " bottles of beer on the wall.")
    }
    while ( bottles === 1 ) {
     console.log( bottles + " bottle of beer on the wall, " + bottles + " bottle of beer.\nTake one down and pass it around, no more bottle of beer on the wall.")
     bottles --;
    }
    while ( bottles === 0 ) {
     console.log("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.")
     break; // You can use a break statement to exit the loop once the message is printed.
    }
  }