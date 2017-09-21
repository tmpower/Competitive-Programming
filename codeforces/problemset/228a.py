def Main():
    a1, a2, a3, a4 = map(int, input().split())

    ans = 0
    if a1 == a2 or a1 == a3 or a1 == a4:
        ans+=1
    if a2 == a3 or a2 == a4:
        ans+=1
    if a3 == a4:
        ans+=1
    
    print(ans)

if __name__ == "__main__":
    Main()
