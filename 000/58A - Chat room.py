x = raw_input()
word = [i for i in 'hello']
for c in x:
  if c == word[0]:
    word.pop(0)
  if len(word) == 0:
    break
if len(word) == 0:
  print 'YES'
else:
  print 'NO'
