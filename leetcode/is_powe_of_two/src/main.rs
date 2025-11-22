fn is_power_of_two(n: i32) -> bool {
    n > 0 && (n & (n - 1)) == 0
}

fn main() {
    let _test1 = is_power_of_two(1);
    let _test1 = is_power_of_two(16);
    let test1 = is_power_of_two(16777215);
    if test1 {
        println!("Ok")
    } else {
        println!("f");
    }
}
