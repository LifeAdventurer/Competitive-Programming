use proconio::marker::*;
use itertools::*;

fn main() {
    proconio::input! {
        mut s: Bytes
    }
    *s.last_mut().unwrap() += 1;
    println!("{}", s.iter().map(|c| *c as char).join(""));
}