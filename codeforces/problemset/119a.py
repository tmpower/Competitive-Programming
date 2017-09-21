from fractions import gcd

def Main():
    a, b, n = map(int, input().split())

    turn = 0
    while True:
        if n == 0:
            break
        
        if turn == 0:
            n -= gcd(a, n)
        else:
            n -= gcd(b, n)
        
        turn = (turn+1)%2
    
    print((turn+1)%2)

if __name__ == "__main__":
    Main()
