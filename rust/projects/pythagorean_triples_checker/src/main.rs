extern crate pythagorean_triples_checker;

use pythagorean_triples_checker::query;
use pythagorean_triples_checker::get_input;
use pythagorean_triples_checker::test_abc;

fn main() {
    let mut input = String::new();
    loop {
        query("Enter 3 integer values or 'q' to quit: ");
        get_input(&mut input);
        if input == "q" {
            break;
        }
        if test_abc(&input) {
            println!(" is a pythagorean triple!");
        } else {
            println!(" is not a pythagorean triple!");
        }
    }
}
