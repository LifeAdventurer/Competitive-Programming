/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 08.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main() {
  u_ying_u_with_whale;
  int n;
  cin >> n;
  set<int> s;
  while(n--){
    int x, a;
    cin >> x;
    if(x == 1){
      cin >> a;
      s.insert(a);
    }
    else if(x == 2){
      cin >> a;
      if(!s.count(a)) cout << "error\n";
      else{
        s.erase(a);
      }
    }
    else if(x == 3){
      cout << s.size() << '\n';
    }
    else if(x == 4){
      if(s.empty()) cout << "error\n";
      else{
        cout << *s.begin() << '\n';
      }
    }
    else{
      if(s.empty()) cout << "error\n";
      else{
        cout << *s.rbegin() << '\n';
      }
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
