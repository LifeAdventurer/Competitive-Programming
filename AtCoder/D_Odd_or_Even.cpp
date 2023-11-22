/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.08.2023 19:00:00
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
  
  int N, K;
  cin >> N >> K;

  vector<int> ans(N + 1);
  vector<int> ask(K + 1);
  iota(ask.begin(), ask.end(), 0);
  auto query = [&](){
    cout << "?";
    for(int i = 1; i <= K; ++i){
      cout << " " << ask[i];
    }
    cout << endl;
    int x;
    cin >> x;
    return x;
  };
  for(int i = K; i <= N; ++i){
    ask[K] = i; 
    ans[i] = query();
  }
  for(int i = 1; i < K; ++i){
    ask[i] = N - 1;
    ans[i] = ans[N - 1] ^ (query() != ans[N]);
    ask[i] = i;
  }
  if(accumulate(ans.begin() + 1, ans.begin() + K + 1, 0) % 2 != ans[K]){
    for(int i = 1; i <= N; ++i){
      ans[i] ^= 1;
    }
  }

  cout << "!";
  for(int i = 1; i <= N; ++i){
    cout << " " << ans[i];
  }
  cout << endl;

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/