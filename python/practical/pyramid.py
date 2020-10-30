x=int(input('Enter base length : '))

print('\n\nHead down pyramid with for loop : ')

for i in range(0,x):
    j=x-i
    print(' '*i,'* '*j)

print('\n\nHead up pyramid with for loop : ')

for i in range(0,x+1):
    j=x-i
    print(' '*j,'* '*i)


print('\n\nHead down pyramid with while loop : ')

i=0
while(i<x):
    j=x-i
    print(' '*i,'* '*j)
    i=i+1


print('\n\nHead up pyramid with while loop : ')

i=0
while(i<=x):
    j=x-i
    print(' '*j,'* '*i)
    i=i+1
