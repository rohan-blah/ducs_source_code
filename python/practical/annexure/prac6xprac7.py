def func(n):
    list=[]
    #fibbonacci number
    n1,n2=0,1
    x=n-2
    while x!=0:
        nth=n1+n2
        n1=n2
        n2=nth
        x=x-1

    list.append(nth)

    #factorial of nth
    fact=1
    while(nth>0):
        fact=fact*nth
        nth=nth-1

    list.append(fact)

    return list

num=int(input('''Enter number term for which
operations are to be done : '''))
print(func(num))
