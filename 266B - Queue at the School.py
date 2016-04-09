t = int(raw_input().split(' ')[1])
q = raw_input()
for _ in range(t):
  n = q.replace('BG', 'GB')
  if n is q:
    break
  else:
    q = n
print q
