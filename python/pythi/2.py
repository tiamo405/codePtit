import re

def is_valid_password(password):
    if len(password) < 6 or len(password) > 12:
        return False
    
    if not re.search(r'[a-z]', password):
        return False
    
    if not re.search(r'[A-Z]', password):
        return False
    
    if not re.search(r'[0-9]', password):
        return False
    
    if not re.search(r'[$#@!]', password):
        return False
    
    return True

passwords_input = input().strip()
passwords = passwords_input.split(',')

valid_passwords = []
for password in passwords:
    if is_valid_password(password):
        valid_passwords.append(password)

if valid_passwords:
    print(','.join(valid_passwords))
else:
    print("INVALID PASSWORD")