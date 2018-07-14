string = input()
string = string.replace('144', '#').replace('14', '#').replace('1', '#')

if string.replace('#', ''):
    print('NO')
else:
    print('YES')
