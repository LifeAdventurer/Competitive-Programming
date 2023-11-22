/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int n;
vector<int> v(15);

void dfs(int cnt){
  if(cnt == n){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        cout << (v[i] == j ? "Q" : "*");
      }
      cout << '\n';
    }
    cout << '\n';
    return;
  }
  for(int i = 0; i < n; ++i){
    v[cnt] = i;
    bool ok = true;
    for(int j = 0; j < cnt; ++j){
      if(v[cnt] == v[j] || (v[cnt] - v[j]) == (cnt - j) || (v[cnt] - v[j]) == (j - cnt)) ok = false;
      
    }
    if(ok) dfs(cnt + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n;

  dfs(0);  

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
