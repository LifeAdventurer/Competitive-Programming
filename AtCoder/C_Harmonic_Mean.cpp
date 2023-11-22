/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 02.07.2023 20:52:52
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
    if(n == 1){
      cout << "Yes\n1\n";
    }
    else if(n == 2){
      cout << "No\n";
    }
    else{
      cout << "Yes\n";
      bool check = false;
      for(int i = 1; i < n; ++i){
        if(n == i * (i + 1)){
          check = true;
          break;
        }
      }
      if(check){
        cout << 2 << " ";
        for(int i = 1; i < n - 1; ++i){
          cout << i * (i + 1) * 2 << " ";
        }
        cout << (n - 1) * 2 << '\n';
      }
      else{
        for(int i = 1; i < n; ++i){
          cout << i * (i + 1) << " ";
        }
        cout << n << '\n';
      }
    }
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
