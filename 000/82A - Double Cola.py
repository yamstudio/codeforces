q = ['Sheldon', 'Leonard', 'Penny', 'Rajesh', 'Howard']
t = input() - 1
n = 1
while t >= 5 * n:
  t -= 5 * n
  n *= 2
print q[int(t / n)]
