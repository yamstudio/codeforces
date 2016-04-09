from math import *

raw_input()
inp = raw_input().split()
a = [0] * 5
for i in inp:
    a[int(i)] += 1
car = a[4] + a[3]
a[1] -= a[3]
r = 2 * a[2] + max(0, a[1])
car += int(ceil(r * 1.0 / 4))
print car