t = int(input())
for _ in range(t):
    x = y = 0
    s = input().strip()
    ok = True
    for c in s:
        if c == 'E': x += 1
        elif c == 'W': x -= 1
        elif c == 'N': y += 1
        elif c == 'S': y -= 1
        else:
            ok = False
            break
    print(f"{x} {y}" if ok else "INVALID")
