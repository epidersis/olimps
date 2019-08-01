var n = parseInt(readline());
var allEven = true;
var board = [];

for (var i = 0; i < n; i++) {
  board[i] = readline();
}

out: for (var i = 0; i < n; i++) {
  for (var j = 0; j < n; j++) {
    if (check(board, i, j) % 2 != 0) {
      allEven = false;
      break out;
    }
  }
}

if (allEven) {
  print("YES");
} else {
  print("NO");
}


function check(arr, i, j) {
  var rows = arr.length;
  var cols = arr[0].length;
  var countOfO = 0;
  
  if (i != 0) {
    if (arr[i - 1][j] =='o') {
      countOfO++;
    }
  }

  if (i != rows - 1) {
    if (arr[i + 1][j] =='o') {
      countOfO++;
    }
  }

  if (j != 0) {
    if (arr[i][j - 1] =='o') {
      countOfO++;
    }
  }

  if (j != cols - 1) {
    if (arr[i][j + 1] =='o') {
      countOfO++;
    }
  }

  return countOfO;
}
