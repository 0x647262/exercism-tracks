extern crate drinking_song;

#[test]
fn bottle() {
    assert_eq!(drinking_song::bottle_or_bottles(1), "bottle");
}

#[test]
fn bottles() {
    assert_eq!(drinking_song::bottle_or_bottles(2), "bottles");
}
