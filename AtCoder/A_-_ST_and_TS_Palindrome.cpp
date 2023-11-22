/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 29.Jan.2023
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
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    if(n == k || n == k * 2 || ((n & 1) && n * 3 == k)){
      cout << "Yes\n";
      continue;
    }
    if(n > k){
      bool ok = true;
      for(int i = 0; i < k; ++i){
        if(s[i] != s[s.size() - k + i]){
          ok = false;
          break;
        }
      }
      cout << (ok ? "Yes\n" : "No\n");
      continue;
    }
    if(n * 2 > k || n * 3 != k){
      bool ok = true;
      for(int i = 1; i < s.size(); ++i){
        if(s[i] != s[i - 1]){
          ok = false;
          break;
        }
      }
      cout << (ok ? "Yes\n" : "No\n");
      continue;
    }
    if(n * 2 == k){
      bool ok = true;
      for(int i = 0; i < s.size(); ++i){
        if(s[i] != s[s.size() - i - 1]){
          ok = false;
          break;
        }
      }
      cout << (ok ? "Yes\n" : "No\n");
      continue;
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
