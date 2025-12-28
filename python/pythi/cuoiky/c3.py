import math

t_line = input().split()
if t_line:
    t = int(t_line[0])
    for _ in range(t):

        d = list(map(float, input().split()))
        
        a = math.sqrt((d[0]-d[2])**2 + (d[1]-d[3])**2)
        b = math.sqrt((d[2]-d[4])**2 + (d[3]-d[5])**2)
        c = math.sqrt((d[4]-d[0])**2 + (d[5]-d[1])**2)
        
        if a + b > c and a + c > b and b + c > a:
            print(f"{a + b + c:.6f}")
        else:
            print("INVALID")
