/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 29.08.2023 00:51:00
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

map<string, string> p;

string get(string s){
  return (s == p[s] ? s : p[s] = get(p[s]));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  char c;
  string par;
  while(cin >> c && c != '$'){
    string s;
    cin >> s;
    if(c == '#'){
      if(p.find(s) == p.end()) p[s] = s;
      par = s;
    }
    else if(c == '+'){
      p[s] = par;
    }
    else{
      cout << s << " " << get(s) << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/