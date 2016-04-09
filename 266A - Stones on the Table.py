input()
l = raw_input()
count = 1
remove = 0
prev = None
for i in l:
  if i != prev:
    remove += count - 1
    count = 1
    prev = i
  else:
    count += 1
print remove + count - 1
