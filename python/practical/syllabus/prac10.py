str = input('Enter the string : ')
print('you entered : ',str)


def func(x):
    dict = {'letter':'frequency'}
    list = []
    counter = 0
    for l in range(0,len(x)):
        if x[l] in list:
            pass
        else:
            for m in range(0,len(x)):
                if x[m]==x[l]:
                    counter+=1
            list.append(x[l])
            dict[x[l]]=counter
        counter=0

    return dict


dict = func(str)
print(dict)
