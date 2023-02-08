

def isPrime(num):
    for i in range(2,num):
        if(num%i==0):
            return False
    
    return True

x = int(input("Enter the number : "))

for j in  range(2,x+1):
    f = isPrime(j)
    if f:
        print(f,j)