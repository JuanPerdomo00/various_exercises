// Resolve by 


function solution(list) {
    let start = list[0];
    let prev = list[0];
    const ranges = [];
    
    for (let i = 1; i <= list.length; i++) {
        if (i < list.length && list[i] === prev + 1) {
            prev = list[i];
        } else {
            if (start === prev) {
                ranges.push(`${start}`);
            } else {
                ranges.push(`${start}-${prev}`);
            }
            if (i < list.length) {
                start = prev = list[i];
            }
        }
    }
    
    return ranges.join(",");
}

function main() {

    //console.log(solution([-10, -9, -8, -7, -5]))
    //console.log([-10, -9, -8, -7, -6, -5, -3])
    console.log(solution([-10, -9, -8, -6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20]));
    console.log("-10--8,-6,-3-1,3-5,7-11,14,15,17-20")

}

main()
