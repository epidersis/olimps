n = int(input())
arr = list(map(int, input().split(' ')))

a = -1
b = n

for i in range(n-1):
    if arr[i] > arr[i+1]:
        if a == -1:
            a = i

    if a != -1:
        if arr[i] < arr[i+1]:
            b = i+1
            break

if a == -1:
    print('yes')
    print('1 1')
    exit(0)

arr[a:b] = arr[a:b][::-1]

for i in range(n-1):
    if arr[i] > arr[i+1]:
        print('no')
        exit(0)

print('yes')
print(a+1, b)
