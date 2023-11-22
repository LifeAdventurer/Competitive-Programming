/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
    
  vector<int> v(n);
    
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
    
  int mx = 0; 
  for(int i = 0; i < n - 2; ++i){
    mx = max({mx, (v[i] + v[i + 1]) * 3, (v[i] + v[i + 1] + v[i + 2]) * 2});
  }
  mx = max(mx, (v[n - 2] + v[n - 1] * 3));
    
  int p = 6;
  if(mx % 2 == 0){
    mx /= 2;
    p /= 2;
  }
  if(mx % 3 == 0){
    mx /= 3;
    p /= 3;
  }
    
  cout << mx << " " << p << '\n';

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
