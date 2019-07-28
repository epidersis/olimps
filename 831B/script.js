var firstLayout = readline();
var secondLayout = readline();

var input = readline();
var output = '';

for (var i = 0; i < input.length; i++) {
  var char = input[i];
  
  if (~'0123456789'.indexOf(char)) {
    output += char;
    continue;
  }

  if (char === char.toUpperCase()) {
    var LayoutCharPos = firstLayout.indexOf(char.toLowerCase());
    output += secondLayout[LayoutCharPos].toUpperCase();
  } else {
    var LayoutCharPos = firstLayout.indexOf(char);
    output += secondLayout[LayoutCharPos];
  }
}

print(output);
