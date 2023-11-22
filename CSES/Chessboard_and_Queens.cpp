/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 7.Nov.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define all(x) x.begin(), x.end()
 
int ans = 0;
char c[8][8];
vector<vector<bool>> b(8, vector<bool>(8));
 
bool check(int x, int y){
  for(int i = 0; i < 8; ++i){
    for(int j = 0; j < 8; ++j){
      if(i == x && j == y) continue; 
      if(b[i][j]){
        if(i == x || j == y || abs(i - x) == abs(j - y)) return false;
      }
    }
  }
  return true;
}
 
void dfs(int i){
  if(i == 8){
    ans++;
    return;
  }
  for(int j = 0; j < 8; ++j){
    if(check(i, j) && c[i][j] == '.'){
      b[i][j] = true;
      dfs(i + 1);
      b[i][j] = false;
    }
  }
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 
  for(int i = 0; i < 8; ++i){
    for(int j = 0; j < 8; ++j){
      cin >> c[i][j];
    }
  }
 
  dfs(0);
 
  cout << ans << '\n';
 
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