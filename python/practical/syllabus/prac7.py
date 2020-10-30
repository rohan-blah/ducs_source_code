def menu():
    print('\n\nMenu\n')
    print('1 > Length of string')
    print('2 > max of three string')
    print('3 > replace vowels with #')
    print('4 > find number of words')
    print('5 > palindrom test')
    print('6 > Exit')
    choice = int(input('\n\nChoice > '))
    print('\n\n')
    return choice

def action(ch):
    if ch==1:
        st=input('Enter string : ')
        print('length of string : ',len(st))
        
    elif ch==2:
        st1=input('Enter 1st string : ')
        st2=input('Enter 2nd string : ')
        st3=input('Enter 3rd string : ')
        print('largest is : ',(st3 if len(st3)>len(st2) else st2) if len(st2)>len(st1) else (st3 if len(st3)>len(st1) else st1))

    elif ch==3:
        st=input('Enter string : ')
        vowels = ('a','e','i','o','u','A','E','I','O','U')
        for char in st:
            if char in vowels:
                st=st.replace(char,'#')    
        print('Your string is : ',st)

    elif ch==4:
        st=input('Enter string : ')
        counter = 0;
        for char in st:
            if char.isspace():
                counter = counter+1
        counter=counter+1
        print('total number of words : ',counter)

    elif ch==5:
        st=input('Enter string for palindrom test : ')
        strev = ''
        l=len(st)-1
        for i in range(len(st)):
            strev=strev+st[l-i]
        print(strev)
        if st==strev:
            print('string is palindrom')
        else:
            print('String is not palindrom')
    elif ch==6:
        print('Exit')
    else:
        print('Enter correct choice!!!!')
        
choice = 0

while choice!=6 : 
    choice=menu()
    action(choice)
    
