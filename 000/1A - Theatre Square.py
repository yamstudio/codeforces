from math import *

inp = raw_input()
spl = inp.split()
n = int(spl[0])
m = int(spl[1])
a = int(spl[2])
i = int(ceil(n * 1.0 / a))
j = int(ceil(m * 1.0 / a))
print max(1, i * j)