def Main():
    n, m = map(int, input().split())

    x = min(n, m)
    if x%2 == 0:
        print("Malvika")
    else:
        print("Akshat")

if __name__ == "__main__":
    Main()
