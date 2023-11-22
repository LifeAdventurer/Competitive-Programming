/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(pair<int, int> a, pair<int, int> b){
  return (a.first > b.first);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int m = 0, cost = abs(s[0] - s[s.size() - 1]);
    if(s[0] <= s[s.size() - 1]){
      vector<pair<int, int>> p;
      for(int i = 1; i < s.size() - 1; ++i){
        if(s[i] >= s[0] && s[i] <= s[s.size() - 1]){
          p.push_back(make_pair(s[i] - 'a' + 1, i + 1));
          m++;
        }
      }
      sort(all(p));
      cout << cost << " " << m + 2 << '\n';
      cout << "1 ";
      for(int i = 0; i < m; ++i){
        cout << p[i].second << " "; 
      }
      cout << s.size() << '\n';
    } 
    else{
      vector<pair<int, int>> p;
      for(int i = 1; i < s.size() - 1; ++i){
        if(s[i] <= s[0] && s[i] >= s[s.size() - 1]){
          p.push_back(make_pair(s[i] - 'a' + 1, i + 1));
          m++;
        }
      }
      sort(all(p), cmp);
      cout << cost << " " << m + 2 << '\n';
      cout << "1 ";
      for(int i = 0; i < m; ++i){
        cout << p[i].second << " "; 
      }
      cout << s.size() << '\n';
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
