function checkPalindrome(num) {

  var str = '' + num;

  return (str.charAt(0) === str.charAt(5)
    && str.charAt(1) === str.charAt(4)
    && str.charAt(2) === str.charAt(3))
}

var max = 0;

for (var i=999; i>0; i--) {

  for (var j=999; j>=i; j--) {

    if (checkPalindrome(i * j) && max < i * j) {

      max = i * j;
    }
  }
}

console.log(max);