n = int(input())
string = ['I hate that' if x % 2 == 0 else 'I love that' for x in range(n)]
string[-1] = string[-1].replace('that', 'it')
print(' '.join(string))
