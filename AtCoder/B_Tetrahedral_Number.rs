fn main() {
    proconio::input! {
        n: i32
    }
    for x in 0..=n {
        for y in 0..=(n - x) {
            for z in 0..=(n - x - y) {
                println!("{} {} {}", x, y, z);
            }
        }
    }
}