/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.10.2023 20:19:07
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
  map<long long, long long> m;
  for(int i = 0; i < n; ++i){
    int s, c;
    cin >> s >> c;
    m[s] = c;
  }
  int ans = 0;
  while(!m.empty()){
    auto [x, cnt] = *m.begin();
    if(cnt <= 1){
      ans++;
      m.erase(m.begin());
      continue;
    }
    if(cnt & 1) ans++;
    if(m.find(x << 1) != m.end()){
      m[x << 1] += cnt / 2;
      m.erase(m.begin());
    }
    else{
      m[x << 1] = cnt / 2;
      m.erase(m.begin());
    }
  };
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/