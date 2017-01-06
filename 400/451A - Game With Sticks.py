n, m = map(int, raw_input().split())
print ['Akshat', 'Malvika'][min(n, m) % 2 == 0]
