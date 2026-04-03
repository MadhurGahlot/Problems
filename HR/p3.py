'''
Given the names and grades for each student in a class of  students, store them in a nested
 list and print the name(s) of any student(s) having the second lowest grade.
Note: If there are multiple students with the second lowest grade,
 order their names alphabetically and print each name on a new line

'''
n=int(input(" enter the no: "))



result =[]
for i in range(n):     # here we use the index based 
    name =input("Enter the name: ")
    #grade = float(input("Enter the grade: "))
    grade= float(input("Enter the grade: "))
    result.append([name,grade])
      
grades =[]
for grade in result:  # here we use direct element based loop 
    grades.append(grade[1]) 
    
uniquegrade = set(grades)

sortedgrade = sorted(uniquegrade)

secondlowest = sortedgrade[1]

#second_lowest = sorted(set(grades))[1] all there step in one line 

name = []
for student in result:
    if student[1] ==secondlowest:
        name.append(student[0]) 


name.sort()
print(result)    

print(grades)

print(uniquegrade)

print(sortedgrade)

print(name)
