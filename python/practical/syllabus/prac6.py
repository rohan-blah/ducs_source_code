t1=(1,2,5,7,9,2,4,6,8,10)
t=[]
j=0
for i in t1:
    if i%2==0:
        t.append(i)

tup = tuple(t)

print(tup)

t2=(11,13,15)
t1=t1+t2
tmax=t1[1]
tmin=t1[0]
for x in t1:
    if x>tmax:
        tmax=x
    if x<tmin:
        tmin=x
print(t1)
print('MAX : ',tmax,' with max method : ', max(t1))
print('MIN : ',tmin,' with min method : ', min(t1))
