def Main():
    n, m = map(int, input().split())
    nt = n//2
    no = n%2

    found = False
    while True:
        if (nt+no)%m == 0:
            found = True
            break
        if nt == 0:
            break
        nt -=1
        no +=2

    if found == True:
        print(nt+no)
    else:
        print(-1)

if __name__ == "__main__":
    Main()
