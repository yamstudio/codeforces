k, r = map(int, raw_input().split())
c = 1
while ((k * c) % 10 != 0 and (k * c) % 10 != r):
    c += 1
print c