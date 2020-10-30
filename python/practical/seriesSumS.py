n=int(input('Enter value of n : '))

x=n
sum=0

def fact(num):
    fac=1
    while(num!=1):
        fac=fac*num
        num=num-1
    return fac
    
while(x!=0):
    calc=(n-(x-1))/fact(x)
    sum=sum+calc
    x=x-1

print(sum)
