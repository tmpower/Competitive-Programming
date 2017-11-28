package main

import (
	"fmt"
)

func main() {
	var n, m, k, fed int

	fmt.Scan(&n, &m, &k)
	var arm = make([]int, m)

	for i := 0; i < m; i++ {
		fmt.Scan(&arm[i])
	}
	fmt.Scan(&fed)

	ans := 0
	for i := 0; i < m; i++ {
		c := arm[i] ^ fed

		bDiff := 0
		for c > 0 {
			if c&1 == 1 {
				bDiff++
			}
			c = c >> 1
		}

		if bDiff <= k {
			ans++
		}
	}
	fmt.Println(ans)
}
