def extract_student_id(name_line):

    student_id = name_line[:10]
    return student_id

def has_attachment(attachment_line):
    return attachment_line.strip() != "No attachments"

n = int(input())

late_students = []

for i in range(n):
    name_line = input().strip()
    attachment_line = input().strip()
    status_line = input().strip()
    
    student_id = extract_student_id(name_line)

    if has_attachment(attachment_line) and status_line == "Turned in late":
        late_students.append(student_id)

late_students.sort()

print(len(late_students))
for student_id in late_students:
    print(student_id)