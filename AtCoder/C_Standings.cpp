/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.07.2023 20:10:13
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(pair<int, pair<int, int>> A, pair<int, pair<int, int>> B){
  int a = A.second.first;
  int b = A.second.second;
  int c = B.second.first;
  int d = B.second.second;
  long long x = 1LL * a * d, y = 1LL * b * c;
  if(x == y) return A.first < B.first;
  return x > y;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<pair<int, pair<int, int>>> v(n);
  for(int i = 0; i < n; ++i){
    int a, b;
    cin >> a >> b;
    v[i].first = i + 1;
    v[i].second.first = a;
    v[i].second.second = a + b;
  }
  sort(all(v), cmp);
  
  for(int i = 0; i < n; ++i){
    cout << v[i].first << " \n"[i == n - 1];
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
