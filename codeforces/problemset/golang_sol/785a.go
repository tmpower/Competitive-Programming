package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func readInt(scanner *bufio.Scanner) int {
	scanner.Scan()
	ans, _ := strconv.Atoi(scanner.Text())
	return ans
}

func readWord(scanner *bufio.Scanner) string {
	scanner.Scan()
	return scanner.Text()
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	scanner.Split(bufio.ScanWords)

	n := readInt(scanner)

	ans := 0
	for i := 0; i < n; i++ {
		geoShape := readWord(scanner)
		if strings.Compare(geoShape, "Tetrahedron") == 0 {
			ans += 4
		} else if strings.Compare(geoShape, "Cube") == 0 {
			ans += 6
		} else if strings.Compare(geoShape, "Octahedron") == 0 {
			ans += 8
		} else if strings.Compare(geoShape, "Dodecahedron") == 0 {
			ans += 12
		} else if strings.Compare(geoShape, "Icosahedron") == 0 {
			ans += 20
		}
	}
	fmt.Println(ans)
}
