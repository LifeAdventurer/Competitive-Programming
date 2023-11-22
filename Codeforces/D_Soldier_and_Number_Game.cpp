/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.06.2023 23:04:20
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int maxn = 5e6 + 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  vector<int> fact(maxn, 0), num(maxn, 0);
  for(int i = 2; i < maxn; ++i){
    num[i] = i;
  }
  for(int i = 2; i < maxn; ++i){
    for(int j = i; j < maxn; j += i){
      while(num[j] % i == 0){
        num[j] /= i;
        fact[j]++;
      }
    }
  }

  for(int i = 1; i <= maxn; ++i){
    fact[i] += fact[i - 1];
  }

  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    cout << fact[a] - fact[b] << '\n';
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
