def Main():
    n = int(input())

    ptwo = 0
    tsum = 0

    while n > tsum+(5*(2**ptwo)):
        tsum += (5*(2**ptwo))
        ptwo+=1
    
    n -= tsum
    ans = ["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
    print(ans[(n-1)//(2**ptwo)])

if __name__ == "__main__":
    Main()
