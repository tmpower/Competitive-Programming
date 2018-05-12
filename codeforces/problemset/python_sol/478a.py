def Main():
    c1, c2, c3, c4, c5 = map(int, input().split())

    if (c1+c2+c3+c4+c5) != 0 and (c1+c2+c3+c4+c5) % 5 == 0:
        print((c1+c2+c3+c4+c5) // 5)
    else:
        print(-1)

if __name__ == "__main__":
    Main()
