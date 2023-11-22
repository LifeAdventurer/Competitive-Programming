/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define sq(x) (x)*(x)

int n, d;
vector<int> x, y;
vector<bool> vis(2005, false);

void dfs(int i){
  vis[i] = true;
  for(int j = 0; j < n; ++j){
    if(d * d >= sq(x[i] - x[j]) + sq(y[i] - y[j]) && !vis[j]) dfs(j);
  }  
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   
  cin >> n >> d;
  
  x.resize(n);
  y.resize(n);
  for(int i = 0; i < n; ++i){
    cin >> x[i] >> y[i];
  }

  dfs(0);

  for(int i = 0; i < n; ++i){
    cout << (vis[i] ? "Yes\n" : "No\n");
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
