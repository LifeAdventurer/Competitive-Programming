/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.07.2023 23:33:38
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
    }
    vector<int> pre(n);
    unordered_map<int, int, custom_hash> m;
    pre[n - 1] = v[n - 1];
    m[v[n - 1]] = 1;
    for(int i = n - 2; i >= 0; --i){
      pre[i] = (pre[i + 1] ^ v[i]);
      m[pre[i]] = 1;
    }
    
    auto check = [&](int k){
      for(int i = n - 1; i >= 0; --i){
        if(m.find(k) != m.end()){
          return true;
        }
        if(m.find(pre[i] ^ k) != m.end()){
          return true;
        }
      }
      return false;
    };

    int k = *max_element(all(v)), cnt = 0;
    while(k){
      k >>= 1;
      cnt++;
    }
    k = (1 << cnt);
    while(k--){
      if(check(k)){
        cout << k << '\n';
        break;
      }
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
