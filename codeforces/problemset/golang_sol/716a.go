package main

import (
	"fmt"
)

func main() {
	var n, c int

	fmt.Scan(&n, &c)

	var ts = make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&ts[i])
	}

	ans := 1
	for i := n - 1; i > 0; i-- {
		if ts[i]-ts[i-1] > c {
			break
		}
		ans++
	}

	fmt.Println(ans)
}
