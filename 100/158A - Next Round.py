k = int(raw_input().split().pop())
t = raw_input().split()
c = int(t[k - 1])
if c > 0:
    while k < len(t) and int(t[k]) >= c:
        k += 1
else:
    while k > 0  and int(t[k - 1]) == 0:
        k -= 1
print k