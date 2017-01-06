import bisect;
n = input();
x = sorted(map(int, raw_input().split()));
for _ in range(input()):
    print(bisect.bisect_right(x, input()));
