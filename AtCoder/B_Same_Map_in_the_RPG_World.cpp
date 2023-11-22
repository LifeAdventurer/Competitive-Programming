/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.Apr.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  
  vector<vector<char>> A(n, vector<char>(m)), B(n, vector<char>(m));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> A[i][j];
    }
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> B[i][j];
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      bool ok = true;
      for(int k = 0; k < n; ++k){
        for(int l = 0; l < m; ++l){
          if(A[(k + i) % n][(l + j) % m] != B[k][l]) ok = false;
        }
      }
      if(ok){
        cout << "Yes\n";
        return 0;
      }
    }
  }

  cout << "No\n";

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
