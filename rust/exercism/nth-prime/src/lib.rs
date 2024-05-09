fn is_prime(n: u64) -> bool {
    // Not the most efficient algorithm, but it gets the job done!
    if n <= 1 {
        return false;
    } else if n <= 3 {
        return true;
    } else if n % 2 == 0 || n % 3 == 0 {
        return false;
    } else {
        let mut i = 5;
        while i * i <= n {
            if n % i == 0 || n % (i + 2) == 0 {
                return false;
            } else {
                i += 1;
            }
        }
    }
    true
}

fn nth_prime(n: u64) -> u64 {
    let mut primes = 0;
    let mut result = 0;

    while primes < n {
        result += 1;
        if is_prime(result) {
            primes += 1;
        }
    }
    result
}

pub fn nth(n: u64) -> std::result::Result<u64, &'static str> {
    match n {
        0 => Err(""),
        _ => Ok(nth_prime(n)),
    }
}
