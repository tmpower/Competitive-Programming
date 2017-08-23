def Main():
    n = int(input())

    if n%2 == 0:
        print(n//2)
    else:
        print(-1*(n+1)//2)


if __name__ == "__main__":
    Main()
