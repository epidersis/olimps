n, L = map(int, input().split())
k = list(map(int, input().split()))
s = list(map(int, input().split()))

b = k[:]

while True:
    if k == s:
        print('YES')
        exit(0)

    if k[0] == 0:
        k = k[1:]
        k.append(L)

    for i in range(n):
        k[i] -= 1

    if k == b:
        print('NO')
        exit(0)
