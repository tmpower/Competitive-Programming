def Main():
    n = int(input())

    tot = 0
    for i in range(1, 10000):
        tot += ((i*(i+1)) // 2)

        if tot == n:
            print(i)
            break
        elif tot > n:
            print(i-1)
            break

if __name__ == "__main__":
    Main()
