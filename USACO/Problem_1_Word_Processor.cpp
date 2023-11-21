/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  setIO("word");

  int n, k;
  cin >> n >> k;

  int cnt = 0;
  for(int i = 0; i < n; ++i){
    string s;
    cin >> s;
    if(!cnt) cout << s;
    else if(cnt + s.size() <= k) cout << " " << s;
    else{
      cout << '\n';
      cnt = 0;
      cout << s;
    }
    cnt += s.size(); 
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
