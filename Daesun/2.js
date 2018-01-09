let first = 1;
let second = 2;
let temp = 0;
let sum = 0;

do {

  if (second % 2 == 0) {
    sum += second;
  }

  temp = first + second;
  first = second;
  second = temp;
}
while (second <= 4000000);

console.log(sum);