def Main():
    k, r = map(int, input().split())

    for i in range(1, 10):
        if (i*k)%10 == 0 or (i*k)%10 == r:
            print(i)
            k = -1
            break

    if k != -1:
        print(10)

if __name__ == "__main__":
    Main()
