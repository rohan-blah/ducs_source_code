num_students = int(input("Please enter number of students:"))
print ("you entered %s students" %num_students)
student_info = {}
student_data = ['sub1 ', 'sub2 ', 'sub3 ', 'sub4 ']
stu_name=[]
average = {'Name':'','Percentage':0.0}
for i in range(0,num_students):
    student_name = input("Name :")
    stu_name.append(student_name)
    student_info[student_name] = {}
    total=0
    for entry in student_data:
        student_info[student_name][entry] = int(input(entry)) #storing the marks entered as integers to perform arithmetic operations later on.
        total+=student_info[student_name][entry]
    total=total/4
    if total>average['Percentage']:
        average['Name']=student_name
        average['Percentage']=total

print('Highest scorer : ',average['Name'],' With ',average['Percentage'],' Percent')
