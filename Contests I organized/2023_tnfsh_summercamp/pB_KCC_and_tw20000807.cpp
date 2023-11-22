/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.07.2023 23:04:35
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
struct card{
  int a, b;
};
 
struct cmp{
  bool operator() (card A, card B){
    return A.a - A.b < B.a - B.b;
  }
};
 
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n;
  cin >> n;
  priority_queue<card, vector<card>, cmp> pq;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < n; ++i){
    int b;
    cin >> b;
    card x;
    x.a = a[i];
    x.b = b;
    pq.push(x);
  }
  long long ans = 0;
  while(!pq.empty()){
    auto x = pq.top();
    pq.pop();
    pq.push({x.b, x.a});
    x = pq.top();
    ans += x.a;
    pq.pop();
  }
  cout << ans << '\n';
    
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
