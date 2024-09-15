use std::io;

fn main() {
    let mut x = String::new();
    let mut y = String::new();

    io::stdin().read_line(&mut x).unwrap();
    io::stdin().read_line(&mut y).unwrap();

    let x: i32 = x.trim().parse().unwrap();
    let y: i32 = y.trim().parse().unwrap();

    if x > 0 {
        if y > 0 {
            print!("1");
        } else {
            print!("4");
        }
    } else {
        if y > 0 {
            print!("2");
        } else {
            print!("3");
        }
    }
}