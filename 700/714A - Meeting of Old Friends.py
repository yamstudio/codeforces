l = map(int, raw_input().split())
a = max(l[0], l[2])
b = min(l[1], l[3])
t = b - a
if t < 0:
    t = 0
elif l[4] < a or l[4] > b:
    t += 1
print(str(t))
