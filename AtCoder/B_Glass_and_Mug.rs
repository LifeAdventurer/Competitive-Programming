use proconio::input;

fn main() {
    input! {
        k: i32,
        g: i32,
        m: i32,
    }

    let mut a = g;
    let mut b = m;
    for _ in 0..k {
        if a == g {
            a = 0;
        } else if b == 0 {
            b = m;
        } else {
            let x = b.min(g - a);
            a += x;
            b -= x;
        }
    }

    println!("{} {}", a, b);
}