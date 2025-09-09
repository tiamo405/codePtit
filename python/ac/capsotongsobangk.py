t = int(input())
for _ in range(t):
    numbers = list(map(int, input().split()))
    k = int(input())
    
    pairs = []
    n = len(numbers)
    
    # Find all pairs that sum to k
    for i in range(n):
        for j in range(i + 1, n):
            if numbers[i] + numbers[j] == k:
                pairs.append((numbers[i], numbers[j]))
    
    # Output the result
    if pairs:
        result = []
        for pair in pairs:
            result.append(f"({pair[0]}, {pair[1]})")
        print(" ".join(result))
    else:
        print("NO")