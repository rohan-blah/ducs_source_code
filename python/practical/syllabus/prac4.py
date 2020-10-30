x=int(input('Enter number greater than 10 : '))

def func(n):
    print('number is : ',n)
    a={}
    a=set()
    tmp=0
    tmp=int(tmp)
    while n>0 :
        tmp=n%10
        a.add(tmp)
        n=int(n/10)

    return a

print(func(x))
