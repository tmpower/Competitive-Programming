def Main():
    str1 = input()

    ans = 0
    cnt = 26*[0]
    for cr in str1:
        if cr.isalpha() == True:
            if cnt[ord(cr)-97] == 0:
                cnt[ord(cr)-97] = 1
                ans+=1
    
    print(ans)

if __name__ == "__main__":
    Main()
