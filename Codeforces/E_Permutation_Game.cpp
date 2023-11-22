/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.07.2023 15:01:03
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
    vector<int> v(n);
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < n; ++i){
      cin >> v[i];
      if(v[i] != n - i && v[i] != i + 1) c++;
      else if(v[i] != i + 1) a++;
      else b++;
    }
    if(a > b){
      if(c >= a - b) cout << "Tie\n";
      else cout << "Second\n";
    }
    else if(a == b){
      if(c == 0) cout << "First\n";
      else cout << "Tie\n";
    }
    else{
      if(c > b - a) cout << "Tie\n";
      else cout << "First\n";
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
