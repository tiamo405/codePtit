t = int(input())
for _ in range(t):
    coords = input().split()
    if not coords: continue
    
    x, y = map(float, coords)
    
    if x == 0 or y == 0:
        print(0)
    elif x > 0 and y > 0:
        print(1)
    elif x < 0 and y > 0:
        print(2)
    elif x < 0 and y < 0:
        print(3)
    else:
        print(4)