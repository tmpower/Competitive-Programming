def Main():
    n, t = map(int, input().split())
    q = list(input())

    for j in range(t):
        i = 0
        while i < len(q)-1:
            if q[i] == 'B' and q[i+1] == 'G':
                q[i] = 'G'
                q[i+1] = 'B'
                i +=2
            else:
                i +=1
    print("".join(q))

if __name__ == "__main__":
    Main()
