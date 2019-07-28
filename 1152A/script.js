readline();

var chests = readline().split(' ').map(function(num) {
  return parseInt(num);
});

var keys = readline().split(' ').map(function(num) {
  return parseInt(num);
});

var evenChestsAmount = 0;
var oddChestsAmount = 0;

var evenKeysAmount = 0;
var oddKeysAmount = 0;

for (var i = 0; i < chests.length; i++) {
  if (chests[i] % 2 == 0) {
    evenChestsAmount++;
  } else {
    oddChestsAmount++;
  }
}

for (var i = 0; i < keys.length; i++) {
  if (keys[i] % 2 == 0) {
    evenKeysAmount++;
  } else {
    oddKeysAmount++;
  }
}

var result = Math.min(evenChestsAmount, oddKeysAmount);
result += Math.min(oddChestsAmount, evenKeysAmount);

print(result);
