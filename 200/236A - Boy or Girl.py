w = []
for i in raw_input():
  if i not in w:
    w.append(i)
if len(w) % 2 != 0:
  print 'IGNORE HIM!'
else:
  print 'CHAT WITH HER!'
