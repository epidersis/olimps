var q = parseInt(readline());

for (var i = 0; i < q; i++) {
  var _ = readline().split(' ').map(Number);

  var l = _[0];
  var r = _[1];
  var d = _[2];

  if (d < l || d > r) {
    print(d);
  } else {
    var minToBreakFree = Math.floor(r / d);
    print(d * (minToBreakFree + 1));
  }
}
