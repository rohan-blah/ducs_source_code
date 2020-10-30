def triRecursion(k,result):
    if k>0 : 
        result=k+triRecursion(k-1,result)
        print(result)
    #else: result = 0

    return result
result=0
triRecursion(6,result)
