def Main():
    strr = input()

    lwr = 0
    upr = 0

    for i in range(len(strr)):
        if strr[i].isupper() == True:
            upr+=1
        else:
            lwr+=1
    
    if upr > lwr:
        print(strr.upper())
    else:
        print(strr.lower())

if __name__ == "__main__":
    Main()
