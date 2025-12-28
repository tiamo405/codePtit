t = int(input())
company = {}

for _ in range(t):
    line = input().split()
    if not line: continue
    
    cmd = line[0]
    
    if cmd == "ADD":
        dept, name, phone = line[1], line[2], line[3]
        if dept not in company:
            company[dept] = {}
        company[dept][name] = phone
        
    elif cmd == "DEL":
        dept, name = line[1], line[2]
        if dept in company and name in company[dept]:
            del company[dept][name]
            
    elif cmd == "FIND":
        dept, name = line[1], line[2]
        print(company.get(dept, {}).get(name, "NOT FOUND"))
            
    elif cmd == "LIST":
        dept = line[1]
        if dept in company and company[dept]:
            sorted_names = sorted(company[dept].keys())
            res = [f"{n}:{company[dept][n]}" for n in sorted_names]
            print(" ".join(res))
        else:
            print("EMPTY")