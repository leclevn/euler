const startNum = 600851475143;
let maxPrimeFactor = 1;

function divide(num) {

  if (num <= 1)
    return;

  for (var i = 2; ; i++) {

    if (num % i === 0) {

      if (maxPrimeFactor < i) {
        maxPrimeFactor = i;
      }

      return divide(num / i);
    }
  }
}

divide(startNum);

console.log(maxPrimeFactor);