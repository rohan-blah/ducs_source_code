#The below function creates a list,
#from the given decimal number.

def hexa(n):
    a=[]
    while n>16 :
        rem=n%16
        n=int(n/16)
        a.insert(0,rem)
    a.insert(0,n)
    return a

#Asking user to input decimal number
x=int(input())
hexn=hexa(x)
print(hexn)

#converting the list returned by the
#function 'hexa' to hexadecimal form
hexnum='0x'
for i in hexn:
    if i<10 : hexnum=hexnum+str(i)
    elif i==10 : hexnum=hexnum+'a'
    elif i==11 : hexnum=hexnum+'b'
    elif i==12 : hexnum=hexnum+'c'
    elif i==13 : hexnum=hexnum+'d'
    elif i==14 : hexnum=hexnum+'e'
    elif i==15 : hexnum=hexnum+'f'

print('Number in hexa is : ',hexnum)
print()

