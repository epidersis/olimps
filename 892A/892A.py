input()

v = sum(map(int, input().split(' ')))
c = list(map(int, input().split(' ')))

s = max(c)
c.remove(s)
s += max(c)

print('YES' if s - v >= 0 else 'NO')
