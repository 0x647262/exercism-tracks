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

pub fn challenge() -> &'static str {
    let range = Range::new(0, 2);
    let mut rng = rand::thread_rng();
    match range.ind_sample(&mut rng) {
        0 => "rock",
        1 => "paper",
        2 => "scissors",
        _ => "Error!",
    }
}

pub fn compare(a: &str, b: &str) {
    println!("{0} {1}", a, b);
    if a == b {
        println!("Draw!");
        return;
    }
    if a == "rock" && b == "paper" {
        println!("Paper beats rock!");
        return;
    }
    if a == "rock" && b == "scissors" {
        println!("Rock beats scissors!");
        return;
    }
    if a == "paper" && b == "scissors" {
        println!("Scissors beats paper!");
        return;
    }
    if a == "paper" && b == "rock" {
        println!("Paper beats rock!");
        return;
    }
    if a == "scissors" && b == "rock" {
        println!("Rock beats scissors!");
        return;
    }
    if a == "scissors" && b == "paper" {
        println!("Scissors beats paper!");
        return;
    }
}
