n = int(input())

a = set(input().split(' ')[1:])
a.update(frozenset(input().split(' ')[1:]))
a.discard('0')

print('I become the guy.' if len(a) == n else 'Oh, my keyboard!')
