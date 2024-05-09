// --- Day 3: No Matter How You Slice It ---
//
// The Elves managed to locate the chimney-squeeze prototype fabric for Santa's
// suit (thanks to someone who helpfully wrote its box IDs on the wall of the
// warehouse in the middle of the night). Unfortunately, anomalies are still
// affecting them - nobody can even agree on how to cut the fabric.
//
// The whole piece of fabric they're working on is a very large square - at
// least 1000 inches on each side.
//
// Each Elf has made a claim about which area of fabric would be ideal for
// Santa's suit. All claims have an ID and consist of a single rectangle with
// edges parallel to the edges of the fabric. Each claim's rectangle is defined
// as follows:
//
//      - The number of inches between the left edge of the fabric and the left
//        edge of the rectangle.
//      - The number of inches between the top edge of the fabric and the top
//        edge of the rectangle.
//      - The width of the rectangle in inches.
//      - The height of the rectangle in inches.
//
// A claim like #123 @ 3,2: 5x4 means that claim ID 123 specifies a rectangle 3
// inches from the left edge, 2 inches from the top edge, 5 inches wide, and 4
// inches tall. Visually, it claims the square inches of fabric represented by
// # (and ignores the square inches of fabric represented by .) in the diagram
// below:
//
//      ...........
//      ...........
//      ...#####...
//      ...#####...
//      ...#####...
//      ...#####...
//      ...........
//      ...........
//      ...........

const INPUT: &str = include_str!("input");

struct Claim {
    // Given: #1 @ 509,796: 18x15
    // Store:
    //      id = 1
    //      x = 509
    //      y = 796
    //      width = 18
    //      height = 15
    id: i32,
    x: i32,
    y: i32,
    width: i32,
    height: i32,
}

fn parse_claim(/*claim: String*/) -> Claim {
    // Passed: "#1 @ 509,796: 18x15"
    // Return:
    //  Claim {
    //      id = 1
    //      x = 509
    //      y = 796
    //      width = 18
    //      height = 15
    //  }

    // Have: #1 @ 509,796: 18x15
    // Want: 1 509 796 18 15
    //
    // 1. Regex to capture groups:
    //      r"^#(?x)
    //          (?P<id>\d+)
    //          \s@\s
    //          (?P<x>\d+)
    //          ,
    //          (?P<y>\d+)
    //          :
    //          (?P<width>\d+)
    //          x
    //          (?P<height>\d+)
    //      $"
    // 2. Split for easy consumption:
    // Note: This is still pseudocode...
    let parsed = re.captures(claim).unwrap();
    let id = &split[0];
    let x = &split[1];
    let y = &split[2];
    let width = &split[3];
    let height = &split[4];
    Claim {
        id: id,
        x: x,
        y: y,
        width: width,
        height: height,
    }
}

pub fn part_one() {
    // The problem is that many of the claims overlap, causing two or more claims
    // to cover part of the same areas. For example, consider the following claims:
    //
    //      #1 @ 1,3: 4x4
    //      #2 @ 3,1: 4x4
    //      #3 @ 5,5: 2x2
    //
    // Visually, these claim the following areas:
    //
    //      ........
    //      ...2222.
    //      ...2222.
    //      .11XX22.
    //      .11XX22.
    //      .111133.
    //      .111133.
    //      ........
    //
    // The four square inches marked with X are claimed by both 1 and 2. (Claim 3,
    // while adjacent to the others, does not overlap either of them.)
    //
    // If the Elves all proceed with their own plans, none of them will have enough
    // fabric. How many square inches of fabric are within two or more claims?
    println!("");
}
