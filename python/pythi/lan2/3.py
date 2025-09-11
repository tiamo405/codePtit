t = int(input())
while t:
    arr = list(map(int, input().split()))
    k = int(input())
    res = 0
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            sum_ = sum(arr[i:j+1])
            if sum_ % k == 0:
                res = max(res, j-i+1)
    print(res)
    t -= 1
