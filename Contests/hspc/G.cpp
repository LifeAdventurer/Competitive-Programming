/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.Apr.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, k, q;
  cin >> n >> m >> k >> q;
  map<int, int> mp;
  map<int, pair<int, int>> p;
  for(int i = 0; i < k; ++i){
    int k, x, y;
    cin >> k >> x >> y;
    mp[x * 10000 + y] = i + 1;
    p[k].first = x;
    p[k].second = y;
  }

  while(q--){
    int x[4];
    cin >> x[0] >> x[1] >> x[2];
    sort(x, x + 3);
    if(x[0] == x[1] || x[1] == x[2]){
      cout << "Not ghost key condition!\n";
    }
    else{
      set<int> a, b;
      for(int i = 0; i < 3; ++i){
        int c = p[x[i]].first, d = p[x[i]].second;
        if(a.count(c)) a.erase(c);
        else a.insert(c);
        if(b.count(d)) b.erase(d);
        else b.insert(d);
      }
      if(a.size() == 1 && b.size() == 1){
        if(!mp.count(*a.begin() * 10000 + *b.begin())){
          cout << "Not ghost key condition!\n";
        }
        else{
          cout << "Find ghosy key: " << mp[*a.begin() * 10000 + *b.begin()] << '\n';
        }
      }
      else{
        cout << "Not ghost key condition!\n";
      }
    }
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
