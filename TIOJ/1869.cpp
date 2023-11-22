/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 02.08.2023 21:00:44
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
  
  int n;
  cin >> n;
  BIT.resize(n + 1, vector<long long>(n + 1));
  int cmd;
  while(cin >> cmd){
    if(cmd == 1){
      int x, y, z;
      cin >> x >> y >> z;
      x++; y++;
      modify(x, y, z);
    }
    else{
      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      x1++; y1++; x2++; y2++;
      cout << query(x1 - 1, y1 - 1) + query(x2, y2) - query(x2, y1 - 1) - query(x1 - 1, y2) << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/