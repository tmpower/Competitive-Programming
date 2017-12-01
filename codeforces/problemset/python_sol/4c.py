def Main():
    n = int(input())

    syst = dict()
    for i in range(n):
        name = input()
        if syst.get(name) == None:
            syst[name] = 1
            print("OK")
        else:
            print(name + str(syst[name]))
            syst[name] += 1


if __name__ == "__main__":
    Main()
