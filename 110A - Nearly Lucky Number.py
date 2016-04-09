s = raw_input()
x = str(s.count('4') + s.count('7'))
if x.count('4') + x.count('7') == len(x):
  print 'YES'
else:
  print 'NO'
