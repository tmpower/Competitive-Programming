def Main():
    n = int(input())

    found = 0
    for i in range(1, n+1):
        if n%i == 0:
            j = i
            while j > 0:
                x = j%10
                if(x == 4 or x == 7):
                    j = j // 10
                else:
                    break
            if j == 0:
                found = 1
                break
        if found == 1:
            break
    if found == 1:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
