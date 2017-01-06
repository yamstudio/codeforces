word = raw_input().lower()
v = 'aeiouy'
n = ''
for c in word:
    if not c in v:
        n += '.' + c
print n