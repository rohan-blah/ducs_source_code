n=int(input('Enter value of n > '))
x=n
sum=0
while(x!=0):
    sum=sum+((n-(x-1))/x)
    x=x-1

print(sum)
