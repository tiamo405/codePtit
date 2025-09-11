import math

def euclidean_distance(x, y):
    distance = 0
    for i in range(len(x)):
        distance += (x[i] - y[i]) ** 2
    return math.sqrt(distance)

def dot_product(x, y):
    product = 0
    for i in range(len(x)):
        product += x[i] * y[i]
    return product

t = int(input())

for _ in range(t):
    x = list(map(float, input().split()))
    y = list(map(float, input().split()))
    
    distance = euclidean_distance(x, y)
    
    dot_prod = dot_product(x, y)
    
    print(f"{distance:.2f} {int(dot_prod)}")