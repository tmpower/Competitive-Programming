def Main():
    t = int(input())

    for i in range(t):
        a = int(input())

        if a > 59 and 360%(180-a) == 0:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    Main()
