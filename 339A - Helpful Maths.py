i = raw_input()
s = '1+' * i.count('1') + '2+' * i.count('2') + '3+' * i.count('3')
print s[:-1]
