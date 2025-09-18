def is_palindrome(s):
    return s == s[::-1]

def find_longest_palindrome(s):
    n = len(s)
    longest = ""
    
    for i in range(n):
        for j in range(i + 2, n + 1):
            substring = s[i:j]
            if is_palindrome(substring) and len(substring) > len(longest):
                longest = substring
    
    return longest if longest else "NOT_FOUND"

t = int(input())
while t > 0:
    a = input().strip()
    result = find_longest_palindrome(a)
    print(result)
    t -= 1