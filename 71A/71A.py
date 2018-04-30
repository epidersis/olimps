for i in range(int(input())):
    string = input()
    print(string if len(string) <= 10 else string.replace(string[1:-1], str(len(string)-2)))
