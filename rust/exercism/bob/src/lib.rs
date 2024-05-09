pub fn reply(words: &'static str) -> String {
    let mut response = String::new();
    let mut capitals = 0;

    for c in words.chars() {
        if c.is_uppercase() {
            capitals += 1;
        }
    }

    if capitals > 1 {
        response.push_str("Whoa, chill out!");
    } else if words.ends_with("?") {
        response.push_str("Sure.");
    } else if words.is_empty() {
        response.push_str("Fine. Be that way!");
    } else {
        response.push_str("Whatever.");
    }
    response
}
