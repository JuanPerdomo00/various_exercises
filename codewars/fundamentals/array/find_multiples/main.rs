fn find_multiples(n: u32, limit: u32) -> Vec<u32> {
    let mut new_vec: Vec<u32> = Vec::new();
    for i in n..=limit {
        if i % n == 0 {
            new_vec.push(i);
        }
    }

    return new_vec;
}

fn main() {
    println!("{:#?}", find_multiples(2, 6));
    println!("{:#?}", find_multiples(2, 4));
}
