list1=[]
list_d=[]
x=input('Enter elements for list : ')
while(x!='~!'):
    list1.append(x)
    x=input('Enter next element (~! to stop ) : ')

print('list is : ',list1)
print()
print()
print('element  frequency')
for x in list1:
    count=0
    for y in list1:
        if y==x : 
            count = count+1
    flag=False
    for ele in list_d:
        if ele==x : flag=True
    if flag==False : 
        list_d.append(x)
        print(x,"      ",count)

del list_d
