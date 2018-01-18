function nThPrime(n) {

  let count = 0;

  for (let i=2;; i++) {

    for (let j=2; j<=i; j++) {

      if (!(i % j)) {

        if (i === j) {

          count ++;

          if (count === n) {

            return i;
          }
        }

        break;
      }
    }
  }
}

console.log(nThPrime(10001));