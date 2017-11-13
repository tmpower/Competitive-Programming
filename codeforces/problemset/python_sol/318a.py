def Main():
    n, k = map(int, input().split())

    n_even = n//2
    n_odd = (n+1)//2
    
    if k > (n+1)//2:
        print(2*(k - (n+1)//2))
    else:
        print(2*k-1)

if __name__ == "__main__":
    Main()
