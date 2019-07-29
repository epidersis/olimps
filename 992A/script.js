var n = parseInt( readline() );
var arr = readline().split(' ').map(Number);

var uniqueNumbers = {};
var steps = 0;

for (var i = 0; i < n; i++) {

  if (arr[i] == 0) {
    continue;
  }

  if (!uniqueNumbers[ arr[i] ]) {
    uniqueNumbers[ arr[i] ] = true;
  }
}

for (var uniqueNumber in uniqueNumbers) {
  steps++;
}

print(steps);
