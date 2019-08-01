var n = readline();
var m = 1;
var pos = 0;

for (var i = n.length - 1; i >= 0; i--) {
  if (n[i] == '4') {
    pos += m;
  } else {
    pos += m * 2;
  }
  
  m *= 2;
}

print(pos);
