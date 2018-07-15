k = int(input().split(' ')[1])

print(len(list(filter(lambda x: x.count('4') + x.count('7') <= k, input().split()))))
