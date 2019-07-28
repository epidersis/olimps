var doesntExist = true;

var n = parseInt(readline());
var planes = readline().split(' ').map(function(x) {
  return parseInt(x);
});

for (var i = 0; i < n; i++) {
  firstPlanesLove = planes[i];
  secondPlanesLove = planes[firstPlanesLove - 1];

  thirdPlanesLove = planes[secondPlanesLove - 1];

  if (thirdPlanesLove === i + 1) {
      print('YES');
      doesntExist = false;
      break;
  }
}

if (doesntExist) {
  print('NO');
}
