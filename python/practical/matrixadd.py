import random
m1=int(input('Enter total number of rows in the first matrix : '))
n1=int (input('Enter total number of columns in the first matrix : '))
a=[[random.random() for row in range(m1)] for col in range(n1)]
for i in range(m1):
    for j in range(n1):
        a[i][j]=int(input())

m2=int(input('Enter total number of rows in the second matrix'))
n2=int(input('Enter total number of columns in the second matrix'))
b=[[random.random() for row in range(m2)] for col in range(n2)]
for i in range(m1):
    for j in range(n2):
        b[i][j]=int(input())

c=[[random.random() for row in range(m1)] for col in range(n1)]
if((m1==m2) and (n1==n2)):
    print('Output is')
    for i in range(m1):
        for j in range(n1):
            c[i][j]=a[i][j]+b[i][j]
            print(c[i][j],end=' ')
        print()

else:
    print('matrices not compatible!!!!')
