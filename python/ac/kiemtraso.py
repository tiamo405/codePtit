for t in range(int(input())):
    s = input()
    
    digit_sum = sum(int(digit) for digit in s)
    condition1 = (digit_sum % 10 == 0)
    
    condition2 = True
    for i in range(len(s) - 1):
        if abs(int(s[i]) - int(s[i + 1])) != 2:
            condition2 = False
            break
    
    if condition1 and condition2:
        print("YES")
    else:
        print("NO")