pub fn hamming_distance(string_a: &str, string_b: &str) -> Result<u32, ()> {
    if string_a.len() != string_b.len() {
        return Err(());
    }

    let mut a = string_a.chars();
    let mut b = string_b.chars();
    let mut distance = 0;
    loop {
        let char_a = a.next();
        let char_b = b.next();
        if char_a == None || char_b == None {
            break;
        }
        if char_a != char_b {
            distance += 1;
        }
    }
    Ok(distance)
}
