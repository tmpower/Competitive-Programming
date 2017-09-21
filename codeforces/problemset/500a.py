def Main():
    n, t = map(int, input().split())
    arr = list(map(int, input().split()))

    st = 0
    t -= 1
    while st < t:
        st += arr[st]
    
    if st == t:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    Main()
