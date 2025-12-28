t = int(input())
for _ in range(t):
    words = input().split()
    res = []
    for w in words:
        digits = ''.join(c for c in w if c.isdigit())
        if digits:
            res.append(str(len(digits)))
    print(' '.join(res))
