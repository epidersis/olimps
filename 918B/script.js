var serversAndCommandsAmount = readline().split(' ').map(Number);

var s = serversAndCommandsAmount[0],
    c = serversAndCommandsAmount[1];

var servers = {}

for (var i = 0; i < s; i++) {
  var server = readline().split(' ');
  servers[ server[1] ] = server[0];
}

for (var i = 0; i < c; i++) {
  var command = readline();
  print(command + ' #' + servers[ command.split(' ')[1].slice(0, -1)]);
}
