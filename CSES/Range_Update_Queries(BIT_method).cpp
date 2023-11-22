/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2023 10:31:14
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<long long> BIT;

int lowbit(int x){
  return x & -x;
}

void modify(int x, long long val){
  for(; x < (int)BIT.size(); x += lowbit(x)){
    BIT[x] += val;
  }
}

long long query(int x){
  long long ans = 0;
  for(; x > 0; x -= lowbit(x)){
    ans += BIT[x];
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, q;
  cin >> n >> q;
  BIT.resize(n + 1);
  for(int i = 1; i <= n; ++i){
    long long x;
    cin >> x;
    modify(i, x);
    modify(i + 1, -x);
  }

  while(q--){
    int cmd;
    cin >> cmd;
    if(cmd == 1){
      int a, b;
      long long u;
      cin >> a >> b >> u;
      modify(a, u);
      modify(b + 1, -u);
    }
    else{
      int k;
      cin >> k;
      cout << query(k) << '\n';
    }
  }
  
  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
