a = input()
dem = 0
for i in a:
    if i == '5' or i == '3':
        dem += 1
print("YES" if dem ==3 or dem == 5 else "NO")