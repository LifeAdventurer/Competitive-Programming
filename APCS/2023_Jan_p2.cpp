#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q, r;
  cin >> n >> q >> r;
  string s;
  cin >> s;
  vector<string> v;
  while(q--){
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }
    string t = s;
    for(int i = 0; i < n; ++i){
      t[--a[i]] = s[i];
    }
    v.push_back(t);
    s = t;
  }
  for(int i = 0; i < r; ++i){
    for(string it : v){
      cout << it[i];
    }
    cout << '\n';
  }

  return 0;
}
