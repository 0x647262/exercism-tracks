// http://hermanradtke.com/2015/05/29/creating-a-rust-function-that-returns-string-or-str.html

pub fn verse(line: i32) -> String {
    match line {
        0 => {
            format!("No more bottles of beer on the wall, no more bottles of beer.\nGo to the \
                     store and buy some more, 99 bottles of beer on the wall.\n")
        }
        1 => {
            format!("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it \
                     around, no more bottles of beer on the wall.\n")
        }
        2 => {
            format!("2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it \
                     around, 1 bottle of beer on the wall.\n")
        }
        _ => {
            format!("{0} bottles of beer on the wall, {0} bottles of beer.\nTake one down and \
                     pass it around, {1} bottles of beer on the wall.\n",
                    line,
                    line - 1)
        }
    }
}

pub fn sing(start: i32, end: i32) -> String {
    let mut lyrics = String::new();

    for line in (end..start + 1).rev() {
        // 19:50:25 ~steveklabnik | krak-n: so you can convert String to a&str easily
        // 19:50:32 ~steveklabnik |         lyrics.push_string(verse(line));
        // 19:50:38 ~steveklabnik |         lyrics.push_string(&verse(line));
        // 19:50:45 ~steveklabnik | changing to add that & should make it work
        // 19:51:36 ~steveklabnik | specifically, &String automatically coerces to &str
        // 19:51:58 ~steveklabnik | so when verse(line) returns a String, the & makes it a &String, the coercion kicks in, and push_string gets the type it wants
        // 19:52:02 ~steveklabnik | does that make sense?
        lyrics.push_str(&verse(line));
        if line != end {
            lyrics.push_str("\n");
        }
    }
    lyrics
}
