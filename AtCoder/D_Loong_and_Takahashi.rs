use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
    }

    let mut v: Vec<Vec<i32>> = vec![vec![0; n]; n];

    let mut cur = 1;
    let mut dir = 0;
    let mut x = 0;
    let mut y = 0;
    let mut step = n * n - 1;
    let dx = [1, 0, -1, 0];
    let dy = [0, 1, 0, -1];

    while step > 0 {
        v[x][y] = cur;
        cur += 1;
        let nx = x as isize + dx[dir];
        let ny = y as isize + dy[dir];

        if nx < 0 || ny < 0 || nx >= n as isize || ny >= n as isize || v[nx as usize][ny as usize] != 0 {
            dir = (dir + 1) % 4;
        }

        x = (x as isize + dx[dir]) as usize;
        y = (y as isize + dy[dir]) as usize;
        step -= 1;
    }

    for i in 0..n {
        for j in 0..n {
            if i == n / 2 && j == n / 2 {
                print!("T ");
            } else {
                print!("{} ", v[i][j]);
            }
        }
        print!("\n")
    }
}