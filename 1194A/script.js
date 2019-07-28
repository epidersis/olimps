var queriesAmount = parseInt(readline());

for (var i = 0; i < queriesAmount; i++) {
  var nAndX = readline().split(' ').map(function(element) {
    return parseInt(element);
  });
  
  n = nAndX[0];
  x = nAndX[1];

  print(2 * x);
}
