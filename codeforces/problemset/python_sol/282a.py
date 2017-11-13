def Main():

    n = int(input())
    ans = 0
    for i in range(n):
        opr = input()
        if opr[1] == '+':
            ans+=1
        else:
            ans-=1
    print(ans)


if __name__ == "__main__":
    Main()
