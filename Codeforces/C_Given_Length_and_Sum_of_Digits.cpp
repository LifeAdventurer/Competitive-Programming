/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int m, s;
  cin >> m >> s;
  if(m == 1 && s < 10){
    cout << s << " " << s << '\n';
  }
  else if(!s){
    if(m == 0) cout << "0 0\n";
    else cout << "-1 -1\n";
  }
  else if(m * 9 < s){
    cout << "-1 -1\n"; 
  }
  else{
    if(m * 9 - s < 9){
      if(s % 9) cout << s % 9;
      for(int i = 0; i < s / 9; ++i){
        cout << 9;
      }
    }
    else{
      cout << 1;
      for(int i = 0; i < m - 1 - (s + 7) / 9; ++i){
        cout << 0;
      }
      if((s - 1) % 9) cout << (s - 1) % 9;
      for(int i = 0; i < (s - 1) / 9; ++i){
        cout << 9;
      }
      
    }
    cout << " ";
    for(int i = 0; i < m; ++i){
      cout << min(9, s);
      s -= min(9, s);
    }
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
