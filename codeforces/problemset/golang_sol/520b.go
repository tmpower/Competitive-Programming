package main

import (
	"fmt"
)

type pair struct {
	location int
	dist     int
}

func main() {
	var n, m int
	fmt.Scanf("%d%d", &n, &m)

	if n >= m {
		fmt.Println(n - m)
	} else {
		visited := make([]bool, m+2)

		queue := make([]pair, 1)
		queue[0] = pair{n, 0}

		ans := 0
		visited[n] = true
		for {
			// pop front element
			tmp := queue[0]
			queue = queue[1:]

			if tmp.location == m { // reached destination
				ans = tmp.dist
				break
			}

			// adist neighbors to the queue
			if tmp.location*2 <= m+1 && visited[tmp.location*2] == false {
				queue = append(queue, pair{tmp.location * 2, tmp.dist + 1})
				visited[tmp.location*2] = true
			}
			if tmp.location-1 >= 0 && visited[tmp.location-1] == false {
				queue = append(queue, pair{tmp.location - 1, tmp.dist + 1})
				visited[tmp.location-1] = true
			}
		}

		fmt.Println(ans)
	}
}

package main

import (
	"fmt"
)

type pair struct {
	location int
	dist     int
}
