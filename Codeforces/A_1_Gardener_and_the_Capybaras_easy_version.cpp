/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 10.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

void print(string s, int l, int r){
  for(int i = l; i < r; ++i){
    cout << s[i];
  }
  cout << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    if(s[0] == 'a'){
      if(s[1] == 'a'){
        cout << "a a ";
        print(s, 2, s.size());
      }
      else{
        if(s[2] == 'a'){
          cout << "a b ";
          print(s, 2, s.size());
        }
        else{
          cout << "a b";
          int i = 2;
          while(s[i] != 'a' && i <= s.size() / 2){
            cout << s[i];
            ++i;
          }
          cout << " ";
          print(s, i, s.size());
        }
      }
    }
    else{
      if(s[1] == 'a'){
        cout << "b a ";
        print(s, 2, s.size());
      }
      else{
        cout << "b b ";
        print(s, 2, s.size());
      }
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
