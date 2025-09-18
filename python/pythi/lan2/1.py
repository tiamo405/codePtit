t = int(input())
while t:
    a = input()
    dict = {}
    for i in a:
        if i not in dict:
            print(i, end="")
            dict[i] = 1
    print()
    t -= 1
    