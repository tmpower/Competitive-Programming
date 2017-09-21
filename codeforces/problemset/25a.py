def Main():
    n = int(input())
    a = list( map(int, input().split()) )

    ec = 0
    oc = 0
    anse = 0
    anso = 0
    for i in range(n):
        if a[i]%2 == 0:
            if ec != 0:
                anse = 0
            else:
                ec = 1
                anse = i+1
        else:
            if oc != 0:
                anso = 0
            else:
                oc = 1
                anso = i+1

    if anse != 0:
        print(anse)
    else:
        print(anso)


if __name__ == "__main__":
    Main()
