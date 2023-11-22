/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2023 18:02:10
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int md = 1000000007;
const int N = (int) 2e5 + 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tt, k;
  cin >> tt >> k;
  vector<int> dp(N, 0), pre(N, 0);
  dp[0] = 1;
  for(int i = 1; i < N; ++i){
    dp[i] += dp[i - 1];
    if(i >= k) dp[i] = (dp[i] + dp[i - k]) % md;
    pre[i] = (pre[i - 1] + dp[i]) % md;
  }
  while(tt--){
    int a, b;
    cin >> a >> b;
    cout << (pre[b] - pre[a - 1] + md) % md << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/