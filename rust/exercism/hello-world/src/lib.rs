// Originally I had used a match {} statement to catch an empty name variable.
// Upon reviewing other submissions, I came across a succinct solution to the
// problem:
//
//      pub fn hello(name: Option<&str>) -> String {
//          format!("Hello, {0}!", name.unwrap_or("World"))
//      }
//
// https://doc.rust-lang.org/std/option/enum.Option.html#method.unwrap_or
//
// Which (for all intents and purposes in this exercise) compresses the
// previous match statment to a mere single line of code:

pub fn hello(name: Option<&str>) -> String {
    format!("Hello, {0}!", name.unwrap_or("World"))
}
