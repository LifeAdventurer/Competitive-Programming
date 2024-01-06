/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.01.2024 20:15:43
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n, 0));

  int cur = 1;
  int dir = 0;
  int x = 0, y = 0;
  int step = n * n - 1;
  int dx[] = {1, 0,-1, 0};
  int dy[] = {0, 1, 0,-1};
  while (step--) {
    v[x][y] = cur++;
    int X = x + dx[dir];
    int Y = y + dy[dir];
    if (X < 0 || Y < 0 || X >= n || Y >= n || v[X][Y] != 0) {
      dir = (dir + 1) % 4;
    }
    x += dx[dir];
    y += dy[dir];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == n / 2 && j == n / 2) {
        cout << "T ";
      } else {
        cout << v[i][j] << " \n"[j == n - 1];
      }
    }  
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/