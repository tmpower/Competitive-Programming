def Main():
    blc = input()

    if blc[0] == "-":
        iblc = -1 * int(blc)
        ln = len(blc)
        if ln == 2:
            print(0)
        else:
            if int(blc[ln-1]) > int(blc[ln-2]):
                print(blc[:ln-1])
            else:
                print(-1 * int(blc[1:ln-2]+blc[ln-1:]))

    else:
        print(blc)

if __name__ == "__main__":
    Main()
