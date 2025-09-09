t = int(input())
for _ in range(t):
    numbers = list(map(int, input().split()))
    k = int(input())
    
    # Check if k is greater than or equal to the length of the list
    if k >= len(numbers):
        print("INVALID")
    else:
        # Split the list into sublists of size k
        sublists = []
        for i in range(0, len(numbers), k):
            sublist = numbers[i:i+k]
            sublists.append(sublist)
        
        # Format and print the sublists
        result = []
        for sublist in sublists:
            formatted_sublist = "[" + ", ".join(map(str, sublist)) + "]"
            result.append(formatted_sublist)
        
        print(" ".join(result))