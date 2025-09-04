def main():
    a = input()
    tich = 1
    for i in range(0, len(a)):
        if i % 2 == 0 and a[i] != '0':
            tich *= int(a[i])
    print(tich)
test = int(input())
for _ in range(test):
    main()