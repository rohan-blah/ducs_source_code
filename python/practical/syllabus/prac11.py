import os

def clearScreen():
    os.system('clear')

def linearSearch(name,list):
    print('Performing linear search.')
    for i in list:
        if i==name:
            print('name is in the list.')
            return
    print('Name not found in list.')

def binarySearch(name,list):
    print('Performing Binary search.')
    first=0
    last=len(list)-1
    mid=int(len(list)/2 if len(list)%2==0 else (len(list)+1)/2)
    flag = False
    while flag!=True or (mid==first and mid==last):
        if name>list[mid]:
            first=mid
            mid=int((mid+last)/2 if (mid+last)%2==0 else (mid+last+1)/2)
            print(mid)
        elif name<list[mid]:
            last=mid
            mid=int((mid+last)/2 if (mid+last)%2==0 else (mid+last+1)/2)
            print(mid)

        elif name==list[mid]:
            flag=True
            print('Name found in list.')

        else:
            if flag==True:
                print('Name found in list.')

            else:
                print('Name not found in list')

def menu(list):
    ch=0
    while ch!=3:
        print('\n\nMENU')
        print('1) Search')
        print('2) Sort')
        print('3) Exit')

        ch=int(input('Enter your choice : '))
        if(ch==1):
            print('hii')
            submenuSearch(list)
        elif ch==2:
            submenuSort(list)
        elif ch==3:
            return
        else:
            print('Enter correct choice.')

def bubbleSort(list):
    l=len(list)

    for j in range(l):
        for i in range(l-1):
            if list[l-i-1]<list[l-i-2]:
                list[l-i-1],list[l-i-2]=list[l-i-2],list[l-i-1]

    print('Sorted list : ',list)

def insertionSort(list):
    l=len(list)
    for i in range(l):
        tmp=list[i]
        for j in reversed(range(0,i+1)):
            if tmp<list[j-1]:
                list[j]=list[j-1]
            else :
                break
        list[j]=tmp
    print('sorted list is : ',list)

def selectionSort(list):
    l=len(list)
    for i in range(l):
        least=i
        for j in range(i+1,l):
            if list[j]<list[least]:
                least=j
        list[least],list[i]=list[i],list[least]

    print('Sorted list is : ',list)

def submenuSearch(list):
    print('Select Search option')
    print('1) linear search')
    print('2) binary search')
    print('3) go back')
    ch=int(input('> '))

    if ch==1:
        name=input('Enter name you want to search : ')
        linearSearch(name,list)
    elif ch==2:
        name=input('Enter name you want to search : ')
        binarySearch(name,list)
    elif ch==3:
        return

def submenuSort(list):
    print('Select Sorting option')
    print('1) bubble sort')
    print('2) insertion sort')
    print('3) selection sort')

    ch=int(input('> '))
    if ch==1:
        bubbleSort(list)
    elif ch==2:
        insertionSort(list)
    elif ch==3:
        selectionSort(list)

list=[]
size=int(input('Enter number of names of students  : '))
clearScreen()
print('Enter names now\n')
for i in range(size):
    list.append(input())

menu(list)
