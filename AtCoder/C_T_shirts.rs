use proconio::input;
use std::cmp::max;

fn main() {
    input! {
        _n: usize,
        m: i32,
        mut s: String,
    }

    s += "0";

    let mut mx = 0;
    let mut ones = 0;
    let mut twos = 0;

    for c in s.chars() {
        match c {
            '0' => {
                mx = max(mx, twos + max(0, ones - m));
                ones = 0;
                twos = 0;
            }
            '1' => {
                ones += 1;
            }
            '2' => {
                twos += 1;
            }
            _ => (),
        }
    }

    println!("{}", mx);
}