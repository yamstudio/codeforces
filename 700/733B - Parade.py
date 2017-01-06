n = input()
a = []
d = []
b = 0
for i in range(n):
    a.extend(map(int, raw_input().split()))
    d.append(a[2 * i + 1] - a[2 * i])
    b += d[i]
dmin = min(d)
dmax = max(d)
bmin = abs(b - 2 * dmin)
bmax = abs(b - 2 * dmax)
b = abs(b)
if b >= bmax and b >= bmin:
    print('0')
elif bmax >= b and bmax >= bmin:
    print(str(d.index(dmax) + 1))
else:
    print(str(d.index(dmin) + 1))
