package main

import (
	"fmt"
)

func main() {
	var K, G, M int
	fmt.Scan(&K, &G, &M)

	a, b := G, M
	for K > 0 {
		if a == G {
			a = 0
		} else if b == 0 {
			b = M
		} else {
			x := min(G - a, b)
			a += x
			b -= x
		}
		K--
	}

	fmt.Println(a, b)
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}