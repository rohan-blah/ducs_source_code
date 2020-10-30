list1=[]
list_rev=[]
x=input('Enter elements for list : ')

while(x!='~!'):
    list1.append(x)
    x=input('Enter next element (~! to stop )')

print('list is : ',list1)

len=len(list1)

for y in range(len):
    ele=list1[len-y-1]
    list_rev.append(ele)

print('Reverse list is : ',list_rev)
