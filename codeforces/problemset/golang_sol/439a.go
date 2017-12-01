package main

import (
	"fmt"
)

func main() {
	var n, d int
	fmt.Scan(&n, &d)

	var ti int
	fmt.Scan(&ti)

	ans := 0
	sum := ti
	for i := 1; i < n; i++ {
		fmt.Scan(&ti)
		sum += (10 + ti)

		if sum > d {
			ans = -1
			break
		}
		ans += 2
	}
	if ans == -1 || sum > d {
		fmt.Println(-1)
	} else {
		ans += ((d - sum) / 5)
		fmt.Println(ans)
	}
}
