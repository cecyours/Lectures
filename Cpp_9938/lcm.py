# find lcm of any number ?
number = int(input('enter a number :'))

fact = 2
while 1<number:
    is_prime = True
    for i in range(2,int(fact/2+1)):
        if(fact%i==0):
            is_prime = False;
    if(is_prime):
        while number%fact==0:
            number=(number/fact)
            if(number!=1):
                print(fact,end='*')
            else:
                print(fact,end="*1")
    fact+=1