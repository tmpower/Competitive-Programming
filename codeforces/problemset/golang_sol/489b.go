package main

import (
	"fmt"
	"math"
	"sort"
)

func main() {
	var nb, ng int

	fmt.Scan(&nb)
	var bs = make([]int, nb)
	for i := 0; i < nb; i++ {
		fmt.Scan(&bs[i])
	}

	fmt.Scan(&ng)
	var gs = make([]int, ng)
	for i := 0; i < ng; i++ {
		fmt.Scan(&gs[i])
	}

	sort.Ints(bs)
	sort.Ints(gs)

	s := 0
	ans := 0
	for i := 0; i < nb; i++ {
		for j := s; j < ng; j++ {
			if math.Abs(float64(bs[i])-float64(gs[j])) < 2 {
				ans++
				s = j + 1
				break
			}
		}
	}

	fmt.Println(ans)
}
