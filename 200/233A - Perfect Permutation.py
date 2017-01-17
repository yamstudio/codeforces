from __future__ import print_function

n = input()
if n % 2:
    print('-1')
else:
    for i in range(n / 2):
        print(str(2 * i + 2) + ' ' + str(2 * i + 1) + ' ', end='')
