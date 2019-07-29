var num = parseInt(readline());
var xPos = 0;
var xNeg = 0;
var canBeDone = true;

for (var i = 0; i < num; i++) {
  var x = readline().split(' ').map(function(element) {
    return parseInt(element);
  })[0];

  if (x > 0) {
    xPos++;
  } else {
    xNeg++;
  }

  if (xPos > 1 && xNeg > 1) {
    canBeDone = false;
    print('No');
    break;
  }
}

if (canBeDone) {
  print('Yes');
}
