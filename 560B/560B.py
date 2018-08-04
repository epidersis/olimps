from itertools import combinations

a1, b1 = sorted(map(int, input().split(' ')), reverse=True)
a2, b2 = sorted(map(int, input().split(' ')), reverse=True)
a3, b3 = sorted(map(int, input().split(' ')), reverse=True)


arr = [[a2+a3, max(b2, b3)],
       [max(a2, a3), b2+b3],
       [a2+b3, max(b3, a3)]]

for el in arr:
    if el[0] <= a1 and el[1] <= b1 or el[1] <= a1 and el[0] <= b1:
        print('YES')
        exit(0)

print('NO')
