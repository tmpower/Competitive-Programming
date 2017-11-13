import math

def isPrime(x):
    if x%2 == 0:
        return False
    
    for i in range(3, int(math.sqrt(x))+1, 2):
        if x%i == 0:
            return False

    return True

def Main():
    n = int(input())

    for x in range(4, (n+1)//2):
        if isPrime(x) == False and isPrime(n-x) == False:
            print(x, (n-x))
            break

if __name__ == "__main__":
    Main()
