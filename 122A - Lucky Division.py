x = int(raw_input())
if any(x % i == 0 for i in [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]):
  print 'YES'
else:
  print 'NO'
