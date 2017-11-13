def Main():
    sname = input()

    cnt = [0] * 27
    for i in range(len(sname)):
        cnt[ord(sname[i]) - 97] +=1
    
    ndiff = 0
    for i in range(27):
        if cnt[i] > 0:
            ndiff +=1
    
    if ndiff%2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

if __name__ == "__main__":
    Main()
