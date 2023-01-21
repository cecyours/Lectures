
x = input("Enter expression : ")

if '>' in x:
    data = x.split('>')
    a = float(data[0])
    b = float(data[1])
    print(a,">",b,"=",a>b)

    if a>b:
        print(a,"is greater than ",b)
    else:
        print(b,"is greater than ",a)

if '<' in x:
    data = x.split('<')
    a = float(data[0])
    b = float(data[1])
    print(a,"<",b,"=",a<b)

    if a<b:
        print(a,"is less than",b)
    else:
        print(b,"is less than",a)
    
    

