list=[]
list1=[]
ind_dup=[]
str=input('enter element (QUIT to stop ): ')

while(str!='QUIT'):
    list.append(str)
    list1.append(str)
    str=input('enter element (QUIT to stop ): ')

print(list)

for x in range(len(list)):
    ele=list[x]
    list1.remove(list[x])
    for y in list1:
        if y==ele : 
            ind_dup.append(x)
            break

print('Duplicates found for following indexes : ',ind_dup)
if len(ind_dup)==0 : print('OOPs you see nothing!!!, may be their are\'nt any duplicates ;)')
