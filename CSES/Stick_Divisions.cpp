/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int x, n, d;
  cin >> x >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  for(int i = 0; i < n; ++i){
    cin >> d;
    pq.emplace(d);
  }
  long long ans = 0;
  for(int i = 1; i < n; ++i){
    int p, q;
    p = pq.top();
    pq.pop();
    q = pq.top();
    pq.pop();
    ans += p + q;
    pq.push(p + q);
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
