/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long fastpow(long long x, long long y, int mod){
  x %= mod;
  long long res = 1;
  while(y){
    if(y & 1) res = res * x % mod;
    y >>= 1;
    x = x * x % mod;
  }
  return res;
}

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  setIO("lineup");

  int n;
  cin >> n;
  
  vector<string> v = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
  sort(all(v));
  
  vector<string> check;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < 6; ++j){
      string s;
      cin >> s;
      if(j == 0 || j == 5) check.push_back(s);
    }
  }

  do{
    bool ok = true;
    map<string, int> m;
    for(int i = 0; i < 8; ++i){
      m[v[i]] = i;
    }
    for(int i = 0; i < check.size(); i += 2){
      if(abs(m[check[i]] - m[check[i + 1]]) > 1){
        ok = false;
        break;
      }
    }
    if(ok) break;
  }while(next_permutation(all(v)));

  for(string s : v){
    cout << s << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
