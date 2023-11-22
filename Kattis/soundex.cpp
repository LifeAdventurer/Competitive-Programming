/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string s;
  map<char, char> m;
  m['B'] = m['F'] = m['P'] = m['V'] = '1';
  m['C'] = m['G'] = m['J'] = m['K'] = m['Q'] = m['S'] = m['X'] = m['Z'] = '2';
  m['D'] = m['T'] = '3';
  m['L'] = '4';
  m['M'] = m['N'] = '5';
  m['R'] = '6';

  while(cin >> s){
    string ans = "";
    bool ok = true;

    for(int i = 0; i < s.size(); ++i){
      if(!(m.find(s[i]) == m.end())){
        if(ans.empty() || ok || m[s[i]] != m[s[i - 1]]){
          ok = false;
          ans += m[s[i]];
        } 
        else ok = true;
      }
      else ok = true;
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
