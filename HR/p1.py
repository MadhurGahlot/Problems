'''
 Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given  scores. Store them in a list and find the score of the runner-up.

Input Format

The first line contains . The second line contains an array   of  integers each separated by a space.

Constraints

Output Format

Print the runner-up score.'''

n = int(input("Enter the no :  " ))

#print(" hello")
score =[]

for i in range (n):
    scores =int(input("enter the scores:  "))
    score.append(scores)

print(score)    


high = score[0]

for i in range(len(score)):
    if(score[i]>high):
        high=score[i]
    
print(high ,"\n")

newlist=[]

for i in score :
    if(i != high):
        newlist.append(i)

secondhigh = newlist[0]        

print("This is new list " , newlist)

for i in range(len(newlist)):
    if(newlist[i]>secondhigh):
        secondhigh=newlist[i]

print(f'THE SECOND HIGHEST IS {secondhigh} .')
