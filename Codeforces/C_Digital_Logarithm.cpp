/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,O3,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define I_want_to_be_dian  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  I_want_to_be_dian;
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    priority_queue<int> a, b;
    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      a.push(x);
    }
    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      b.push(x);
    }
    int ans = 0;
    while(!a.empty()){
      if(a.top() == b.top()){
        a.pop();
        b.pop();
      }
      else if(a.top() > b.top()){
        a.push(log10(a.top()) + 1);
        a.pop();
        ans++;
      }
      else{
        b.push(log10(b.top()) + 1);
        b.pop();
        ans++;
      }
    }
    cout << ans << '\n';
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
