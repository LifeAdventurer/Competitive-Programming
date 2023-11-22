/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.07.2023 20:52:24
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool check(string a, string b){
  int cnt = 0;
  for(int i = 0; i < (int)a.size(); ++i){
    cnt += (a[i] != b[i]);
  }
  return (cnt <= 1 ? true : false);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string key;
  string s;
  cin >> key >> s;
  vector<string> v;
  int k = key.size(), n = s.size();
  for(int i = 0; i < n - k + 1; ++i){
    if(check(key, s.substr(i, k))) v.push_back(s.substr(i, k));
  }
  if(v.size() == 0){
    cout << "Not found\n";
    return 0;
  }
  sort(all(v));
  for(auto x : v){
    cout << x << '\n';
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
