def Main():
    n = int(input())

    maxt = 0
    train = 0
    for i in range(n):
        outt, inn = map(int, input().split())

        train -= outt
        train += inn
        if maxt < train:
            maxt = train

    print(maxt)

if __name__ == "__main__":
    Main()
