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

bool cmp(pair<long long, long long> a, pair<long long, long long> b){
  return a.first * b.second > b.first * a.second;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int n, m;
  cin >> n >> m;
    
  vector<pair<long long, long long>> p;
    
  for(int i = 0; i < n; ++i){
    long long v, w;
    cin >> v >> w;
    p.emplace_back(v, w);
  }   
    
  sort(all(p), cmp);
    
  long long ans = 0;
  for(auto x : p){
    ans += (m / x.second) * x.first;
    m %= x.second;
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
