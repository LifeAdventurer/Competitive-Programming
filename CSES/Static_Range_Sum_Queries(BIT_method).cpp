/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2023 00:17:04
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
  for(; x < BIT.size(); x += lowbit(x)){
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
    int x;
    cin >> x;
    modify(i, x);
  }
  
  while(q--){
    int a, b;
    cin >> a >> b;
    cout << query(b) - query(a - 1) << '\n';
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
