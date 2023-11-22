/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.07.2023 12:26:40
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<vector<long long>> BIT;

int lowbit(int x){
  return x & -x;
}

void modify(int x, int y, long long val){
  for(int i = x; i < (int)BIT.size(); i += lowbit(i)){
    for(int j = y; j < (int)BIT.size(); j += lowbit(j)){
      BIT[i][j] += val;
    }
  }
}

long long query(int x, int y){
  long long ans = 0;
  for(int i = x; i > 0; i -= lowbit(i)){
    for(int j = y; j > 0; j -= lowbit(j)){
      ans += BIT[i][j];
    }
  }
  return ans;
} 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, q;
  cin >> n >> q;
  BIT.resize(n + 1, vector<long long>(n + 1));
  vector<vector<int>> mp(n + 1, vector<int>(n + 1));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      char c;
      cin >> c;
      mp[i][j] = (c == '*');
      if(mp[i][j]) modify(i, j, 1);
    }
  }

  while(q--){
    int cmd;
    cin >> cmd;
    if(cmd == 1){
      int x, y;
      cin >> x >> y;
      long long k = (mp[x][y] ^ 1) - mp[x][y];
      mp[x][y] ^= 1;
      modify(x, y, k);
    }
    else{
      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      cout << query(x2, y2) + query(x1 - 1, y1 - 1) - query(x1 - 1, y2) - query(x2, y1 - 1) << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/