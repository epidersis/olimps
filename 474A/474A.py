d = input()
string = input()

layout = '''
qwertyuiop
asdfghjkl;
zxcvbnm,./
'''

t = str.maketrans(layout, layout[1:] + layout[:1] if d == 'L' else layout[-1] + layout[:-1])
print(string.translate(t))
