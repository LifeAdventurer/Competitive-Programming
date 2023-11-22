/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2023 14:57:18
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(pair<long long, long long> A, pair<long long, long long> B){
  if(A.first == B.first) return A.second < B.second; 
  return A.first < B.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool ok = true, YTP = false;
    long long mn = 2e18;
    set<long long> s;
    vector<pair<long long, long long>> v(n);
    for(int i = 0; i < n; ++i){
      long long a, b;
      cin >> a >> b;
      if(b < a) YTP = true;
      v[i] = {a, b};
      s.insert(b);
      mn = min(mn, a);
      if(a != b) ok = false;
    }
    if(YTP){
      cout << "0\n";
      continue;
    }
    sort(all(v), cmp);
    bool ok2 = true, ok3 = true;
    for(int i = 1; i < n; ++i){
      if(ok2 && v[i].second != v[i - 1].second){
        ok2 = false;
      }
      if(!ok2 && v[i].first != v[i].second){
        ok3 = false;
      }
    }
    if(ok){
      cout << mn << '\n';
    }
    else if(s.size() == 1){
      cout << 1 << '\n';
    }
    else if(ok3){
      cout << 1 << '\n';
    }
    else cout << 0 << '\n';
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
