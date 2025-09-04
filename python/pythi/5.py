n = int(input())

group1_words = set()
for _ in range(n):
    line = input().strip().lower()
    words = line.split()
    group1_words.update(words)

m = int(input())

group2_words = set()
for _ in range(m):
    line = input().strip().lower()
    words = line.split()
    group2_words.update(words)

only_in_group1 = group1_words - group2_words

only_in_group2 = group2_words - group1_words

print(' '.join(sorted(only_in_group1)))
print(' '.join(sorted(only_in_group2)))