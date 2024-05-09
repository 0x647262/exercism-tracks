pub fn raindrops(drop: i32) -> String {
    let mut rainspeak = String::new();

    if drop % 3 == 0 {
        rainspeak.push_str("Pling");
    }
    if drop % 5 == 0 {
        rainspeak.push_str("Plang");
    }
    if drop % 7 == 0 {
        rainspeak.push_str("Plong");
    }
    if rainspeak.is_empty() {
        rainspeak = drop.to_string();
    }

    rainspeak
}
