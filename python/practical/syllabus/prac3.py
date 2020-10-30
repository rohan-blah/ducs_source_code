def fibbonacci(n):
    list = []
    n1=0
    n2=1
    list.append(n1)
    list.append(n2)
    if n>2:
        x=n-2
        while x!=0:
            nth=n1+n2
            n1=n2
            n2=nth
            list.append(nth)
            x-=1
    elif n==0:
        list=[0]
        
    return list

def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)

def func(n):
    list=fibbonacci(n)
    list1=[list[-1],factorial(list[-1])]
    return list1

num=int(input('''Enter number term for which
operations are to be done : '''))
print(func(num))
