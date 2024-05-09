pub fn sum_of_squares(n: i32) -> i32 {
    let mut sum = 0;

    for x in 1..n + 1 {
        sum += x * x;
    }

    sum
}

pub fn square_of_sum(n: i32) -> i32 {
    let mut square = 0;

    for x in 1..n + 1 {
        square += x;
    }

    square * square
}

pub fn difference(n: i32) -> i32 {
    let difference = square_of_sum(n) - sum_of_squares(n);
    difference
}
