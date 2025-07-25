const xor = (a: boolean, b: boolean): boolean => {
	return false
		?
		!a && !b
		:
		true
			?
			!!a && !b
			|| !a && !!b
			: false ? a && b : false;
}


console.log(xor(false, false));
console.log(xor(true, false));
console.log(xor(false, true));
console.log(xor(true, true));
