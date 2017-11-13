def Main():
    x = int(input())

    steps = x//5
    if x%5 > 0:
        steps += 1
    print(steps)

if __name__ == "__main__":
    Main()
