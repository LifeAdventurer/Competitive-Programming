/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<string, int> m;
    vector<vector<string>> s(3, vector<string>(n)); 
    for(int i = 0; i < 3; ++i){
      for(int j = 0; j < n; ++j){
        cin >> s[i][j];
        if(m.find(s[i][j]) == m.end()){
          m[s[i][j]] = 1;
        }
        else{
          m[s[i][j]]++;
        }
      }
    }
    vector<int> ans(3, 0);
    for(int i = 0; i < 3; ++i){
      for(int j = 0; j < n; ++j){
        if(m[s[i][j]] == 3){
          continue;
        }
        else if(m[s[i][j]] == 2){
          ans[i]++;
        }
        else{
          ans[i] += 3;
        }
      }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2] << '\n';
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
