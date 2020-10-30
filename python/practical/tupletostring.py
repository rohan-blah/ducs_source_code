import random
print('creating a random character tuple of length five...')

T=tuple()

for i in range(5):
    r = chr(random.randrange(65,90,1))
    T=T+(r,)

print('Tuple is  : ',T)

print('cmonverting in string...')

str=''

for i in T:
    str+=i
    str+=' '

print('string is : ',str)
