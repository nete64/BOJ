use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let input: Vec<&str> = input.split_whitespace().collect();

    let x: i64 = input[0].parse().unwrap();
    let y: i64 = input[1].parse().unwrap();

    print!("{}", (x-y).abs());
}