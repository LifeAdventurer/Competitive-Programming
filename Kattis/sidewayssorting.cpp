/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(string a, string b){
  for(int i = 0; i < a.size(); ++i){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }
  return a < b;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int r, c;
  bool ok = false;
  while(cin >> r >> c && r != 0){
    vector<vector<char>> v(r, vector<char>(c));
    vector<string> s(c, "");

    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        cin >> v[i][j];
        s[j] += v[i][j];
      }
    }
    sort(all(s), cmp);

    if(ok) cout << '\n';
    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        cout << s[j][i];
      }
      cout << '\n';
    }
    ok = true;
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
