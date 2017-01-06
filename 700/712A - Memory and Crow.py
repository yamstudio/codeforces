n = input()
a = map(int, raw_input().split()) + [0]
b = [0] * n
for i in reversed(range(n)):
    b[i] = a[i] + a[i + 1]
print(' '.join(map(str, b)))
