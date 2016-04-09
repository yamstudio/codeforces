word = raw_input()
if word[1:].isupper() or len(word) == 1:
  print word.swapcase()
else:
  print word
