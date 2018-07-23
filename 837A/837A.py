input()
m = 0

for word in input().split(' '):
    temp_m = 0

    for ch in word:
        if ord(ch) <= 90:
            temp_m += 1

    if temp_m > m:
        m = temp_m

print(m)
