p = int(raw_input().split()[0]) - 1
l = sorted(map(int, raw_input().split()))
min = l[p] - l[0]
for i in range(len(l) - p):
  if l[p + i] - l[i] < min:
    min = l[p + i] - l[i]
print min
