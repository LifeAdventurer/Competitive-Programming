/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<int> cnt(1000005);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
    
  vector<int> v(n);
    
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
    
  int r_cnt = 0;
    
  for(int i = 0; i < m; ++i){
    cnt[v[i]]++;
    if(cnt[v[i]] == 2) r_cnt++;
  }
    
  int ans = 0;    
  if(!r_cnt) ans++;
    
  for(int i = 0; i < n - m; ++i){
    cnt[v[i]]--;
    if(cnt[v[i]] == 1) r_cnt--;
    cnt[v[i + m]]++;
    if(cnt[v[i + m]] == 2) r_cnt++;
    if(!r_cnt) ans++;
  }
    
  cout << ans << '\n';

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
