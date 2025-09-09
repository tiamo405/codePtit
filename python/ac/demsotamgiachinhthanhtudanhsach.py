t = int(input())
for _ in range(t):
    sides = list(map(int, input().split()))
    n = len(sides)
    count = 0
    
    # Check all combinations of 3 sides
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                a, b, c = sides[i], sides[j], sides[k]
                
                # Check triangle inequality: sum of any two sides > third side
                if (a + b > c) and (a + c > b) and (b + c > a):
                    count += 1
    
    print(count)