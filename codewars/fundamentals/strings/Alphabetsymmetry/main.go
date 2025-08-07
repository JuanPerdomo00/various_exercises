package main

import (
	"fmt"
	"strings"
)

func solve(slice []string) []int {
	// Your code here and happy coding!

	var number []int

	for i := 0; i < len(slice); i++ {
		lowerWord := strings.ToLower(slice[i])
		counter := 0
		for j := 0; j < len(lowerWord); j++ {
			if lowerWord[j]-'a' == byte(j) {
				counter++
			} else {

			}
		}
		number = append(number, counter)
	}

	return number
}

func main() {
	var l = solve([]string{"abode", "ABc", "xyzD"})
	fmt.Printf("%v\n", l)
}
