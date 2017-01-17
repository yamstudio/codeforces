s = list(raw_input())
if '0' in s:
    s.pop(s.index('0'))
else:
    s = s[0:len(s) - 1]
print(''.join(s))
