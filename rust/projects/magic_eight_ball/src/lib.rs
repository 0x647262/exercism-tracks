extern crate rand;

use std::io::stdin;
use std::io::stdout;
use std::io::Write;
use std::thread::sleep;
use std::time::Duration;
use rand::distributions::IndependentSample;
use rand::distributions::Range;

pub fn query(query: &str) {
    print!("{0}", query);
    stdout().flush().expect("Failed to flush stdout");
}

pub fn get_input(input: &mut String) -> &mut String {
    input.clear();
    stdin()
        .read_line(input)
        .expect("Failed to read from stdin");
    input.pop();
    input
}

fn think() {
    println!("Thinking...");
    sleep(Duration::new(5, 0));
}

fn reply() -> &'static str {
    let range = Range::new(0, 20);
    let mut rng = rand::thread_rng();
    match range.ind_sample(&mut rng) {
        0 => "It is certain",
        1 => "It is decidedly so",
        2 => "Without a doubt",
        3 => "Yes definitely",
        4 => "You may rely on it",
        5 => "As I see it, yes",
        6 => "Most likely",
        7 => "Outlook good",
        8 => "Yes",
        9 => "Signs point to yes",
        10 => "Reply hazy try again",
        11 => "Ask again later",
        12 => "Better not tell you now",
        13 => "Cannot predict now",
        14 => "Concentrate and ask again",
        15 => "Don't count on it",
        16 => "My reply is no",
        17 => "My sources say no",
        18 => "Outlook not so good",
        19 => "Very doubtful",
        _ => "Error!",
    }
}

pub fn scry() {
    think();
    println!("{0}", reply());
}
