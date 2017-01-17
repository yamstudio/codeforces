input()
l = [x for x in raw_input().replace('_', ' ').replace('(', ' ( ').replace(')', ' ) ').split() if x]
f = False
m = 0
c = 0
for x in l:
    if x is '(' or x is ')':
        f = not f
    elif f:
        c += 1
    else:
        m = max(m, len(x))
print(str(m) + ' ' + str(c))
