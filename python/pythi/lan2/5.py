import json

with open('tips.json', 'r') as file:
    data = json.load(file)

tips_data = data['tips']

t = int(input())

for _ in range(t):
    day, time = input().split()
    
    matching_tips = []
    for record in tips_data:
        if record['day'] == day and record['time'] == time:
            tip_value = float(record['tip'])
            matching_tips.append(tip_value)
    
    if matching_tips:
        average_tip = sum(matching_tips) / len(matching_tips)
        print(f"{average_tip:.4f}")
    else:
        print("Invalid")