n = int(input())
word_count = {}
word_order = []

for _ in range(n):
    line = input().strip()
    words = line.split()
    
    for word in words:
        if word not in word_count:
            word_count[word] = 0
            word_order.append(word)
        word_count[word] += 1

# Sort by frequency (descending) then alphabetically
sorted_words = sorted(word_order, key=lambda x: (-word_count[x], x))

for word in sorted_words:
    print(f"{word} {word_count[word]}")