def Main():
    pre1 = input()
    pre2 = input()

    pre1 = pre1.lower()
    pre2 = pre2.lower()

    if pre1 == pre2:
        print(0)
    elif pre1 < pre2:
        print(-1)
    else:
        print(1)

if __name__ == "__main__":
    Main()
