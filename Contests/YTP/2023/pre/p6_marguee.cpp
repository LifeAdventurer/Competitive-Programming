/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.07.2023 18:21:06
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int check(string a){
  bool ok = true;
  for(int i = 0; i < (int)a.size() / 2; ++i){
    if(a[i] != a[(int)a.size() - i - 1]) ok = false;
  }
  return (ok ? 1 : 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  string s;
  cin >> s;
  string t = s.substr(0, n);
  for(int i = 0; i <= n; ++i){
    int cnt = n;
    for(int j = 2; j <= n; ++j){
      for(int k = 0; k + j <= n; ++k){
        //cout << t.substr(k, j) << '\n';
        cnt += check(t.substr(k, j));
      }
    }
    t += s[(i + n - 1) % n];
    t.erase(0, 1);
    cout << cnt << '\n';
    cout << t << '\n';
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
