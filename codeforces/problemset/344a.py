def Main():
    n = int(input())

    prev = input()
    ans = 1
    for _ in range(n-1):
        curr = input()
        if prev[1] == curr[0]:
            ans+=1
        prev = curr

    print(ans)

if __name__ == "__main__":
    Main()
