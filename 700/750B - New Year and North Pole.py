x = 0
dir = {'South': 1, 'North': -1}
for _ in range(int(input())):
    m = input().split()
    if (x == 0 and m[1] != 'South') or (x == 20000 and m[1] != 'North'):
        print('NO')
        exit(0)
    try:
        n = x + int(m[0]) * dir[m[1]]
    except:
        continue
    if (x and n < 0) or (abs(n) > 20000):
        print('NO')
        exit(0)
    x = abs(n)
print('NO') if x else print('YES')
