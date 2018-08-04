k, n, w = map(int, input().split(' '))

credit = sum(range(1, w+1)) * k - n
print(credit if credit > 0 else 0)
