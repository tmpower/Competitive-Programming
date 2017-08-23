def Main():
    bir = input()
    ber = input()

    if bir == ber[::-1]:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
