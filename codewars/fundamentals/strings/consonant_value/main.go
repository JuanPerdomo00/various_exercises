package main

import (
	"fmt"
	"unicode"
)

func isVocal(r rune) bool {
	r = unicode.ToLower(r)
	return r == 'a' || r == 'e' || r == 'i' || r == 'o' || r == 'u'
}

func sum(arr []int) int {
	t := 0
	for _, v := range arr {
		t += v
	}
	return t
}

func solve(str string) int {
	runes := []rune(str)
	maxVal := 0
	var current []int

	for _, ch := range runes {
		if isVocal(ch) {
			if len(current) > 0 {
				val := sum(current)
				if val > maxVal {
					maxVal = val
				}
				current = []int{}
			}
		} else {
			current = append(current, int(unicode.ToLower(ch)-'a')+1)
		}
	}

	if len(current) > 0 {
		val := sum(current)
		if val > maxVal {
			maxVal = val
		}
	}

	return maxVal
}

func main() {
	fmt.Println(solve("zodiac"))
	fmt.Println(solve("strength"))
	fmt.Println(solve("bcd"))
	fmt.Println(solve("aeiou"))
	fmt.Println(solve("ztpw"))
}
