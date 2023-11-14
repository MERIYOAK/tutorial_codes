function fibonacciGenerator(n) {
    var sequence = [];

    if (n === 1) {
        return sequence = [0];
    } else if (n === 2) {
        return sequence = [0, 1];
    } else if (n > 2) {
        sequence = [0, 1];  // Initialize the sequence with the first two Fibonacci numbers
        for (var i = 2; i < n; i++) {
            sequence.push(sequence[i - 1] + sequence[i - 2]);
        }
        return sequence;
    }

    return sequence;  // Return an empty array if n is not a positive integer
}
output = fibonacciGenerator(4);
console.log(output);