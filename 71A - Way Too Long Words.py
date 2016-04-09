for _ in range(input()):
    w = raw_input()
    if len(w) > 10:
        print w[0] + str(len(w) - 2) + w[-1]
    else:
        print w