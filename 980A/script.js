var necklace = readline();

var laceAmount = 0,
    beadAmount = 0;

for (var i = 0; i < necklace.length; i++) {
  if (necklace[i] == '-') {
    laceAmount++;
  } else {
    beadAmount++;
  }
}

if (laceAmount % beadAmount == 0 || beadAmount == 0) {
  print('YES');
} else {
  print('NO');
}
