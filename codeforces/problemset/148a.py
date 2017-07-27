def Main():
    k = int(input())
    l = int(input())
    m = int(input())
    n = int(input())
    d = int(input())

    dmg = 0
    for i in range(1, d+1):
        if i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0:
            dmg +=1

    print(dmg)

if __name__ == "__main__":
    Main()
