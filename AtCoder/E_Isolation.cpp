/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, q;
  cin >> n >> q;

  int cnt = n;
  set<int> adj[n + 1];
  while(q--){
    int cmd;
    cin >> cmd;
    
    if(cmd == 1){
      int a, b;
      cin >> a >> b;
      if(adj[a].empty()) cnt--;
      if(adj[b].empty()) cnt--;
      adj[a].insert(b);
      adj[b].insert(a);

      cout << cnt << '\n';
    }
    else{
      int x;
      cin >> x;
      if(adj[x].empty()){
        cout << cnt << '\n';
        continue;
      }
      
      for(int it : adj[x]){
        adj[it].erase(x);
        if(adj[it].empty()) cnt++;
      }
      adj[x].clear();
      cnt++;

      cout << cnt << '\n';
    }
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
