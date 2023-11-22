/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.07.2023 18:29:14
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> v(n * 2);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
    v[i + n] = v[i];
  }
  vector<int> pre(n * 2);
  multiset<int> ms;
  for(int i = 1; i < n * 2; ++i){
    pre[i] = pre[i - 1] + v[i - 1]; 
    if(i <= n) ms.insert(pre[i]);
  }
  for(int i = 1; i <= n; ++i){
    cout << min(0, *ms.begin() - pre[i - 1]) << " " << max(0, *ms.rbegin() - pre[i - 1]) << '\n';
    ms.erase(ms.find(pre[i]));
    ms.insert(pre[i + n]);
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
