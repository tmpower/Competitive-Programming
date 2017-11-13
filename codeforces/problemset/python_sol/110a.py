def Main():
    n = input()

    cnt = 0
    for i in range(len(n)):
        if n[i] == '4' or n[i] == '7':
            cnt+=1
    
    nl = 0
    while cnt > 0:
        nl = 1
        if cnt % 10 != 4 and cnt%10 != 7:
            nl = 0
            break
        cnt = cnt // 10
    
    if nl == 0:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    Main()
