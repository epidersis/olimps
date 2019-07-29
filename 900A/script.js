var num = parseInt(readline());
var dev = 0;

for (var i = 0; i < num; i++) {
  var x = readline().split(' ').map(function(element) {
    return parseInt(element);
  })[0];

  if (x > 0) {
    dev++;
  } else {
    dev--;
  }
}

if (num - Math.abs(dev) <= 2) {
  print('Yes');
} else {
  print('No');
}
