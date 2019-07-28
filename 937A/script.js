var n = parseInt(readline());
var categories = {};
var ds = readline().split(' ');

ds.forEach(function(element) {
  if(!categories[element] && element !== '0') {
    categories[element] = true;
  }
});

var length = 0;

for (var el in categories) {
  length++;
}

print(length);
