curr = 0
cap = 0
for _ in range(input()):
    p = raw_input().split()
    curr += int(p[1]) - int(p[0])
    cap = max(curr, cap)
print cap