input()
nuts = input().replace(' ', '').replace('0', ' ').strip().split('1')

if len(nuts) == 1 and nuts[0] == '':
    print(0)
    exit(0)

mult = 1

for el in nuts:
    mult *= len(el) + 1

print(mult)
