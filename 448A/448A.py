from math import ceil

c = sum(map(int, input().split(' ')))
m = sum(map(int, input().split(' ')))
n = int(input())

print('YES' if ceil(c/5) + ceil(m/10) <= n else 'NO')
