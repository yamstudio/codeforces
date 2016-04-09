input()
b = [str(len(x)) for x in raw_input().split("W") if x]
print len(b)
print " ".join(x for x in b)
