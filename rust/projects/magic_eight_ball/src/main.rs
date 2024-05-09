extern crate magic_eight_ball;

use magic_eight_ball::query;
use magic_eight_ball::get_input;
use magic_eight_ball::scry;

fn main() {
    loop {
        let mut input = String::new();
        query("Ask me a question, or enter 'q' to quit: ");
        get_input(&mut input);
        if input == "q" {
            break;
        } else {
            scry();
        }
    }
}
