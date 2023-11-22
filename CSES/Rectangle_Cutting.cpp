/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.08.2023 18:22:57
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
  
  int a, b;
  cin >> a >> b;
  if(a > b) swap(a, b);
  vector<vector<int>> dp(a + 1, vector<int>(b + 1, (int)1e9));

  auto Solve = [&](int a, int b, auto Solve) -> int{
    if(a > b) swap(a, b);
    if(dp[a][b] != (int)1e9) return dp[a][b];
    if(a == b) return dp[a][b] = 0;
    if(b % a == 0) return dp[a][b] = b / a - 1;
    for(int i = 1; i < a; ++i){
      dp[a][b] = min(dp[a][b], Solve(i, b, Solve) + Solve(a - i, b, Solve) + 1);
    }
    for(int i = 1; i < b; ++i){
      dp[a][b] = min(dp[a][b], Solve(a, i, Solve) + Solve(a, b - i, Solve) + 1);
    }
    return dp[a][b];
  };

  cout << Solve(a, b, Solve) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/