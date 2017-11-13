def Main():
    lyrc = input()

    i = 0
    ans = ""
    while i < len(lyrc):
        while i < len(lyrc)-2 and lyrc[i] == "W" and lyrc[i+1] == "U" and lyrc[i+2] == "B":
            i+=3
        
        if len(ans) > 0 and i < len(lyrc):
            ans += " "

        j = i
        while j < len(lyrc):
            if lyrc[j] == "W" and j+1 < len(lyrc) and lyrc[j+1] == "U" and j+2 < len(lyrc) and lyrc[j+2] == "B":
                break
            
            ans += lyrc[j]
            j+=1
        
        i = j
    
    print(ans)


if __name__ == "__main__":
    Main()
