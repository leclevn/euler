let sumOfSquares = 0;
let squareOfSums = 0;

for (let i=1; i<=100; i++) {

  sumOfSquares += i*i;
  squareOfSums += i;
}

squareOfSums *= squareOfSums;

console.log(squareOfSums - sumOfSquares);