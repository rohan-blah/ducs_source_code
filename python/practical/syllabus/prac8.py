#part a
def numeric_check(list):
    flag=True
    for x in list:
        if str(x).isnumeric():
            pass
        else:
            flag=False

    return flag

#part b
def odd_count(list):
    count=0
    for x in list:
        if x%2==1:
            count+=1
    return count

#part c
def largest_string(list):
    largest = ""
    for x in list:
        if len(x)>len(largest):
            largest=x
    return largest

#part d
def reverse_print(list):
    for x in range(len(list)-1,-1,-1):
        print(list[x])

#part e
def search(list):
    ele=input("Enter element for search : ")
    index=-1
    for x in range(0,len(list)):
        if list[x]==ele:
            index=x
    if index==-1:
        print('Element not found!!!')
    else:
        print('Element FOund at index ',index)

#part f
def remove(list):
    ele=input('Enter element to remove : ')
    index=0
    for x in range(0,len(list)):
        if list[x]==ele:
            index=x
    del list[index]

#part g
def sorting(list):
    list.sort()
    print(list)
    list.reverse()
    print(list)

#part h
def common():
    list1=[2,6,1,1,5,8]
    list2=[5,1,5,8,0,3]
    list=[]
    for x in list1:
        for y in list2:
            if x==y:
                flag=True
                for z in list:
                    if z==x:
                        flag=False
                if flag==True:
                    list.append(x)
                break
    print(list)

l = [2,3,7,3,6,1]
#print(numeric_check(l))
#print(largest_string(l))
#print(odd_count(l))
#reverse_print(l)
#search(l)
#remove(l)
#print(l)
#sorting(l)
#common()
