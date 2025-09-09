k = int(input())
seen = set()
result = []

for _ in range(k):
    num = int(input())
    if num not in seen:
        seen.add(num)
        result.append(num)

print(' '.join(map(str, result)))