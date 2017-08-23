def Main():
    a = int(input())
    b = int(input())
    c = int(input())

    if a == 1 and b == 1 and c == 1:
        print(a+b+c)
    elif a+b == 2 or a+c == 2 or b+c == 2:
        if a+b == 2:
            print(2*c)
        elif a+c == 2:
            print(2+b)
        else:
            print(2*a)
    elif a == 1 or b == 1 or c == 1:
        if a == 1:
            print((b+1)*c)
        elif b == 1:
            if a < c:
                print((a+1)*c)
            else:
                print(a*(c+1))
        else:
            print((b+1)*a)
    else:
        print(a*b*c)

if __name__ == "__main__":
    Main()
