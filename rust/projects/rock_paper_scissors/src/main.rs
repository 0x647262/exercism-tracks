extern crate rock_paper_scissors;

use rock_paper_scissors::challenge;
use rock_paper_scissors::compare;
use rock_paper_scissors::get_input;
use rock_paper_scissors::query;

fn main() {
    loop {
        let mut input = String::new();
        query("Rock, paper, or scissors ('q' to quit): ");
        get_input(&mut input);
        if input == "q" {
            break;
        }
        let challenge = challenge();
        compare(&input, &challenge);
    }

}
