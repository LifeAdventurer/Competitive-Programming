/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.08.2023 19:42:47
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int maxn = 1e5 + 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int N, W;
  cin >> N >> W;

  vector<long long> dp(maxn, 1e18);
  dp[0] = 0;
  while(N--){
    int w, v;
    cin >> w >> v;
    for(int i = maxn - v; i >= 0; --i){
      dp[i + v] = min(dp[i + v], dp[i] + w);
    }
  }

  for(int i = maxn - 1; i >= 0; --i){
    if(dp[i] <= W){
      cout << i << '\n';
      break;
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/