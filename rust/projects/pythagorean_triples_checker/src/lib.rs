use std::io::stdin;
use std::io::stdout;
use std::io::Write;

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

pub fn test_abc(input: &str) -> bool {
    let mut abc = input.split(' ');
    let a: i32 = abc.next()
        .unwrap()
        .parse::<i32>()
        .expect("Failed to parse as an int");
    let b: i32 = abc.next()
        .unwrap()
        .parse::<i32>()
        .expect("Failed to parse as an int");
    let c: i32 = abc.next()
        .unwrap()
        .parse::<i32>()
        .expect("Failed to parse as an int");

    // Do some quick guess and check...
    if a.pow(2) + b.pow(2) == c.pow(2) {
        print!("{0} {1} {2}", a, b, c);
        true
    } else if c.pow(2) + a.pow(2) == b.pow(2) {
        print!("{0} {1} {2}", c, a, b);
        true
    } else if b.pow(2) + c.pow(2) == a.pow(2) {
        print!("{0} {1} {2}", b, c, a);
        true
    } else {
        print!("{0} {1} {2}", a, b, c);
        false
    }
}
