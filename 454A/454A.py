n = int(input())
for shard in range(-n+1, n, 2):
    print('{0:*^{1}}'.format('D'*(n - abs(shard)), n))
