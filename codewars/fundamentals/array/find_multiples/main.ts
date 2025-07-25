function findMultiples(integer: number, limit: number): number[] {
	const arr = Array.from(
		{ length: limit - integer + 1 },
		(_, i) => i + integer
	).filter(num => num % integer === 0);
	return arr;
};


console.log(findMultiples(2, 6));
