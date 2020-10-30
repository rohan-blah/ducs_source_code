n1,m2=0,1
while(n1!=m2):
    m1=int(input('Enter number of rows for matrix a : '))
    n1=int(input('Enter numer of columns for matrix a : '))
    m2=int(input('Enter number of rows for matrix b : '))
    n2=int(input('Enter number of columns for matrix b : '))
    if n1!=m2: print('\nincompatible for multiplication!!!! enter again\n ')


def multi(a,b):
    c=[[0 for j in range(n2)] for i in range(m1)]
    for i in range(m1):
        for j in range(n2):
            for k in range(m2):
                c[i][j]+=a[j][k]*b[k][j]

    return c

a=[[0 for j in range(n1)] for i in range(m1)]

b=[[0 for j in range(n2)] for i in range(m2)]

print('Enter elements for matrix \'a\' one by one ')
for i in range(m1):
    for j in range(n1):
        a[i][j]=int(input())

print('Enter elements for matrix \'b\' one by one ')
for i in range(m2):
    for j in range(n2):
        b[i][j]=int(input())

print (multi(a,b))
