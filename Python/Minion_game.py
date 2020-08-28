def minion_game(s):
    V = frozenset("AEIOU")
    n = len(s)
    ksc = sum(q for c, q in zip(s, range(n, 0, -1)) if c in V)
    ssc = n * (n + 1) // 2 - ksc
    if ksc > ssc:
        print("Kevin {:d}".format(ksc))
    elif ssc > ksc:
        print("Stuart {:d}".format(ssc))
    else:
        print("Draw")

if __name__ == '__main__':
    s = raw_input()
    minion_game(s)