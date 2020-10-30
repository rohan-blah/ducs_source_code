
import math
def func(a,b,c):
    sides=(a,b,c)
    for x in sides:
        if x > (sum(sides) - x) :
            print('this can\'t be a triangle  ;-; \nQUITING...')
            exit()
    perimeter = sum(sides)
    s=(a+b+c)/2
    area=math.sqrt(s*(s-a)*(s-b)*(s-c))
    tuple=(area,perimeter)


    return tuple

x=int(input('Enter sides of triangle one by one\n'))
y=int(input())
z=int(input())
print(func(x,y,z))
