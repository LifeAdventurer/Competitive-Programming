/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.06.2023 21:16:01
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool ok = false;
    vector<int> v;
    while(n--){
      int x;
      cin >> x;
      if(v.empty()){
        v.push_back(x);
        cout << 1;
      }
      else if(!ok && x >= v.back()){
        v.push_back(x);
        cout << 1;
      }
      else if(ok){
        if(x >= v.back() && x <= v[0]){
          v.push_back(x);
          cout << 1;
        }
        else{
          cout << 0;
        }
      }
      else{
        if(x <= v[0]){
          ok = true;
          v.push_back(x);
          cout << 1;
        }
        else{
          cout << 0;
        }
      }
    }
    cout << '\n';
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
