use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        q: usize
    };
    
    let mut v: Vec<(i32, i32)> = (1..=n as i32).map(|i| (i, 0)).rev().collect();

    for _ in 0..q {
        input! {
            cmd: usize
        }
        if cmd == 1 {
            input! {
                c: char
            }
            let (x, y) = v.last().unwrap();
            match c {
                'U' => { v.push((*x, *y + 1)) },
                'D' => { v.push((*x, *y - 1)) },
                'R' => { v.push((*x + 1, *y)) },
                _ => { v.push((*x - 1, *y)) }
            }
        } else {
            input! {
                p: usize
            }
            let (x, y) = *v.iter().rev().nth(p - 1).unwrap();
            println!("{} {}", x, y);
        }
    }
}