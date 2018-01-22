function pythagorean() {

  for (let i = 1; i < 1000; i++) {

    for (let j = 1; j < 1000; j++) {

      for (let k = 1; k < 1000; k++) {

        if (i * i + j * j == k * k && i + j + k === 1000) {

          return i * j * k;
        }
      }
    }
  }
}

console.log(pythagorean());