def Main():
    n = int(input())
    perr = list(map(int, input().split()))

    ress = 0.0
    for i in range(n):
        ress += perr[i]/100
    
    ress /= n
    ress *= 100

    print(ress)

if __name__ == "__main__":
    Main()
