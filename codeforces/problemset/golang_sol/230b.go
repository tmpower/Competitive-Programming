package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {

	//sieve of Atkin
	const N = 1000002
	var x, y, n int
	nsqrt := math.Sqrt(float64(N))

	isPrime := [N]bool{}

	for x = 1; float64(x) <= nsqrt; x++ {
		for y = 1; float64(y) <= nsqrt; y++ {
			n = 4*(x*x) + y*y
			if n <= N && (n%12 == 1 || n%12 == 5) {
				isPrime[n] = !isPrime[n]
			}
			n = 3*(x*x) + y*y
			if n <= N && n%12 == 7 {
				isPrime[n] = !isPrime[n]
			}
			n = 3*(x*x) - y*y
			if x > y && n <= N && n%12 == 11 {
				isPrime[n] = !isPrime[n]
			}
		}
	}

	for n = 5; float64(n) <= nsqrt; n++ {
		if isPrime[n] {
			for y = n * n; y < N; y += n * n {
				isPrime[y] = false
			}
		}
	}

	isPrime[2] = true
	isPrime[3] = true

	// primes is now a slice that contains all primes numbers up to N
	var nn int

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)

	fmt.Scan(&nn)
	for i := 0; i < nn; i++ {
		for scanner.Scan() {
			if scanner.Text() != "" {
				break
			}
		}
		vl, _ := strconv.ParseInt(scanner.Text(), 10, 64)

		sqt := int64(math.Sqrt(float64(vl)))

		if sqt*sqt == vl {

			if isPrime[sqt] {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}
		} else {
			fmt.Println("NO")
		}
	}
}
