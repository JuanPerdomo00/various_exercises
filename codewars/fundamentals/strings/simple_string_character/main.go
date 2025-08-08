package main 


import (
	"fmt"
)

func Solve(s string) []int {
	//..
	var list_n []int 
	var upperLetter int
	var lowerLetter int 
	var number int 
	var specialCharacter int 


	for i := 0; i < len(s); i++ {
		if s[i] >= 'A' && s[i] <= 'Z' {
			upperLetter++
		} else if s[i] >= 'a' && s[i] <= 'z' {
			lowerLetter++
		} else if s[i] >= '0' && s[i] <= '9' {
			number++
		} else {
			specialCharacter++
		}
	}
	
	list_n =  append(list_n, upperLetter)
	list_n =  append(list_n, lowerLetter)
	list_n = append(list_n, number) 
	list_n = append(list_n, specialCharacter)
	
	return list_n
}

func main() {
	
	fmt.Printf("%v\n", Solve("*'&ABCDabcde12345"))
}
