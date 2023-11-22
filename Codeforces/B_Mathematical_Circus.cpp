/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.08.2022
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
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    if(k % 4 == 3){
      cout << "YES\n";
      for(int i = 1; i <= n; i += 2){
        cout << i << " " << i + 1 << '\n';
      }
    }
    else if(k % 4 == 2){
      cout << "YES\n";
      for(int i = 1; i <= n; i += 2){
        if(i % 4 == 3) cout << i << " " << i + 1 << '\n';
        else cout << i + 1 << " " << i << '\n';
      }
    }
    else if(k % 4 == 1){
      cout << "YES\n";
      for(int i = 1; i <= n; i += 2){
        cout << i << " " << i + 1 << '\n';
      }
    }
    else{
      cout << "NO\n";
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
