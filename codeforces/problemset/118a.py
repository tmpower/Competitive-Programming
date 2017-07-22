import sys

def Main():
    writer = sys.stdout.write
    mytxt = input()
    for i in range(len(mytxt)):
        if (mytxt[i] != 'A' and mytxt[i] != 'O' and mytxt[i] != 'Y' and mytxt[i] != 'E' and mytxt[i] != 'U' and mytxt[i] != 'I' and 
           mytxt[i] != 'a' and mytxt[i] != 'o' and mytxt[i] != 'y' and mytxt[i] != 'e' and mytxt[i] != 'u' and mytxt[i] != 'i'):
        #    print("."+mytxt[i].lower())
           writer("."+mytxt[i].lower())

if __name__ == "__main__":
    Main()
