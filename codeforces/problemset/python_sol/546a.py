def Main():
    k, n, w = map(int, input().split())

    if ((w * (w+1)) / 2)*k - n < 0:
        print("0")
    else:
        print(int(((w * (w+1)) / 2)*k - n))

if __name__ == "__main__":
    Main()
