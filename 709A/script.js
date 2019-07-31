var firstLine = readline().split(' ').map(Number);

var n = firstLine[0];
var b = firstLine[1];
var d = firstLine[2];

var oranges = readline().split(' ').map(Number);

var count = 0;
var currentLoad = 0;

for (var i = 0; i < n; i++) {
  if (oranges[i] <= b) {
    currentLoad += oranges[i];
  }

  if (currentLoad > d) {
    count++;
    currentLoad = 0;
  }
}

print(count);
