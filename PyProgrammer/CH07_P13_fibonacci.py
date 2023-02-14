


def fibbo(n,a=-1,b=1):
    if n==0:
        return
    c = a+b
    print(c)
    fibbo(n-1,b,c)


x = 10
fibbo(x)    
