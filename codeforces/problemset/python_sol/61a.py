def Main():
    a = input()
    b = input()

    c = ""
    for i in range(len(a)):
        if a[i] == b[i]:
            c+="0"
        else:
            c+="1"

    print(c)

if __name__ == "__main__":
    Main()
