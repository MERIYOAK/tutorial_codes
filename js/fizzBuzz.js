function fizzBuzz() {
    var output = [];
    for (let i = 1; i < 60; i++) {
        if ( i % 3 === 0 && i % 5 === 0) {
           output.push("FizzBuzz");
        } else if ( i % 5 === 0) {
           output.push("Buzz");
        } else if ( i % 3 === 0 ){
           output.push("Fizz");
        } else {
           output.push(i);
        }
    }
    console.log(output);
}


/*
var output = [];
var count = 1;

function fizzBuzz() {
         output.push(count);
         count ++;
         if ( count % 3 === 0 && count % 5 === 0) {
                output.push("FizzBuzz");
             } else if ( count % 5 === 0) {
                output.push("Buzz");
             } else if ( count % 3 === 0 ){
                output.push("Fizz");
             } else {
                output.push(count);
             }
         console.log(output);
}
*/