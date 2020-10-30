list1=[]
list2=[]

#DATA INPUT CODE
x=input('Enter elements for list1 : ')
while(x!='~!'):
    list1.append(x)
    x=input('Enter next element (~! to stop) : ')

x=input('Enter elements for list2 : ')
while(x!='~!'):
    list2.append(x)
    x=input('Enter next element (~! to stop) : ')

#COMPARING CODE
flag=0
while(len(list1)!=0 or len(list2)!=0):
    if max(list1)!=max(list2):
        print('The list\'s are unequal!!!Aborting')
        flag=1
        break
    list1.remove(max(list1))
    list2.remove(max(list2))

if flag==0 : print('The list\'s are equal ')
