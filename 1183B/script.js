var qs = readline().split(' ').map(Number);

for (var i = 0; i < qs; i++) {
  var _ = readline().split(' ').map(Number);
  var n = _[0];
  var k = _[1];

  var goods = readline().split(' ').map(Number);
  
  var max = maxEl(goods);
  var min = minEl(goods);

  if (min + k >= max - k) {
    print(min + k);
  } else {
    print(-1);
  }
}

function minEl(arr) {
  var min = arr[0];
  for (var i = 1; i < arr.length; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}

function maxEl(arr) {
  var max = arr[0];
  for (var i = 1; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}
