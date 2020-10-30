def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)
def func(n,x):
    total=0
    i=0
    while n!=0:
        if i%4==0:
            total+=pow(x,i)/factorial(i)
            n-=1
        elif i%2==0 and i%4!=0:
            total-=pow(x,i)/factorial(i)
            n-=1
        else:
            pass

        i+=1

    return total

n=int(input('Enter number of terms n : '))
x=int(input('Enter value of x : '))
print(func(n,x))
