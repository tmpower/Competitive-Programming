package main

import (
	"fmt"
	"math"
)

func main() {
	var k2, k3, k5, k6 float64

	fmt.Scan(&k2, &k3, &k5, &k6)
	n256 := math.Min(k2, math.Min(k5, k6))
	n32 := math.Min(k3, k2-n256)
	fmt.Println(int64(n256*256 + n32*32))
}
