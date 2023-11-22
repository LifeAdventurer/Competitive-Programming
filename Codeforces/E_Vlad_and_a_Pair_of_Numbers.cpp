/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.Jan.2023
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
    int x;
    cin >> x;
    if(x & 1){
      cout << "-1\n";
      continue;
    }

    bool ok = true;
    int a = 0, b = 0;
    for(int i = 1; i < 32; ++i){
      if((x & (1 << i)) && (x & (1 << (i - 1)))){
        ok = false;
        break;
      }
      if((x & (1 << i)) && !(x & (1 << (i - 1)))){
        a += (1 << i) + (1 << (i - 1));
        b += (1 << (i - 1));
      }
    }

    // amazed by others code a = x * 3 / 2, b = x / 2;
    if(!ok){
      cout << "-1\n";
      continue;
    }
    cout << a << " " << b << '\n';
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
