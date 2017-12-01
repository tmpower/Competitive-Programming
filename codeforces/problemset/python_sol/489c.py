def Main():
    m, s = map(int, input().split())

    nnines = s//9
    remd = s%9

    ans1 = ""
    ans2 = ""
    
    if s == 0:
        if m > 1:
            print("-1 -1")
        else:
            print("0 0")
    elif m*9 < s:
        print("-1 -1")
    elif nnines == m:
        ans1 += ("9" * m)
        print(ans1 + " " + ans1)
    
    elif nnines == m-1:
        if remd == 0:
            ans1 += ("18" + (nnines-1)*"9")
        else:
            ans1 += (str(remd) + nnines*"9")

        ans2 += (nnines*"9" + str(remd) + (m-nnines-1)*"0")
        print(ans1 + " " + ans2)
    
    else:
        if remd == 0:
            ans1 += ("1" + (m-nnines-1)*"0" + "8" + (nnines-1)*"9")
        else:
            ans1 += ("1" + (m-nnines-2)*"0" + str(remd-1) + nnines*"9")

        ans2 += (nnines*"9" + str(remd) + (m-nnines-1)*"0")
        print(ans1 + " " + ans2)

if __name__ == "__main__":
    Main()
