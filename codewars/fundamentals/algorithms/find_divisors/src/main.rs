fn divisors(integer: u32) -> Result<Vec<u32>, String> {
    let mut divisor = Vec::new();

    for i in 2..integer {
        if integer % i == 0 {
            divisor.push(i);
        }
    }

    if divisor.is_empty() {
        return Err(format!("{integer} is prime"));
    }

    Ok(divisor)
}

fn main() {
    match divisors(12) {
        Ok(v) => println!("{v:?}"),
        Err(e) => println!("{e:?}"),
    }

    match divisors(25) {
        Ok(v) => println!("{v:?}"),
        Err(e) => println!("{e:?}"),
    }

    match divisors(13) {
        Ok(v) => println!("{v:?}"),
        Err(e) => println!("{e}"),
    }
}
