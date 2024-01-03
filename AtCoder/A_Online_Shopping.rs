use proconio::input;

fn main() {
    input! {
        n: usize,
        s: i32,
        k: i32,
        pq: [(i32, i32); n], 
    }

    let mut ans: i32 = 0;
    for (p, q) in pq {
        ans += p * q;
    }

    ans += if ans >= s { 0 } else { k };
    println!("{}", ans)
}