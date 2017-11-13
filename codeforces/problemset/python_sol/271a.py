def Main():
    m = int(input())
    m +=1

    while True:
        cnt = [0]*10

        cnt[m%10] +=1
        cnt[(m//10)%10] +=1
        cnt[(m//100)%10] +=1
        cnt[m//1000] +=1

        for i in range(10):
            if cnt[i] > 1:
                cnt[0] = -1
                break
        
        if cnt[0] != -1:
            print(m)
            break

        m +=1

if __name__ == "__main__":
    Main()
