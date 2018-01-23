function nUnderPrimeSum(n) {

  let sum = 0;
  let primes = [];

  for (let i=2; i<=n; i++) {

    if (!primes.find(prime => !(i % prime))) {
      primes.push(i);
      sum += i;
    }
  }

  return sum;
}

console.log(nUnderPrimeSum(2000000));