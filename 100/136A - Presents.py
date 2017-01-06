l = [0] * input()
g = map(int, raw_input().split(' '))
for i in range(len(g)):
  l[g[i] - 1] = str(i + 1)
print ' '.join(x for x in l)
