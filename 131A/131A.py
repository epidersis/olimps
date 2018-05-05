string = input()

if string[1:].isupper() or len(string) == 1:
    print(string.swapcase())
else:
    print(string)
