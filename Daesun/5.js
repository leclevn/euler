function factor(num) {

  let results = {};

  while (num > 1) {

    for (var i = 2; i <= num; i++) {

      if (!(num % i)) {

        if (results[i])
          results[i]++;
        else
          results[i] = 1;

        num /= i;
        break;
      }
    }
  }

  return results;
}

function mergeFactors(factors) {

  let results = {};

  factors.forEach(factor => {

    for (let key in factor) {

      if (factor.hasOwnProperty(key)) {

        if (!results[key] || results[key] < factor[key]) {

          results[key] = factor[key];
        }
      }
    }
  });

  return results;
}

function factorToNum(factor) {

  let num = 1;

  for (let key in factor) {

    if (factor.hasOwnProperty(key)) {

      num *= Math.pow(key, factor[key]);
    }
  }

  return num;
}

let factorResult = {};

for (let i = 1; i <= 20; i++) {

  factorResult = mergeFactors([factorResult, factor(i)]);
}

console.log(factorToNum(factorResult));