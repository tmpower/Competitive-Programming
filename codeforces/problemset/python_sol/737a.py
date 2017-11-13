def Main():
    n = int(input())
    res = input()

    ac = res.count("A")
    dc = n - ac

    if ac > dc:
        print("Anton")
    elif dc > ac:
        print("Danik")
    else:
        print("Friendship")

if __name__ == "__main__":
    Main()
