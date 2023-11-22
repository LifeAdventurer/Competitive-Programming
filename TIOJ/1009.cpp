/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.08.2023 22:57:42
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int time(string s){
  int res = 0;
  res += stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6));
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string a, b;
  cin >> a >> b;
  int A = time(a);
  int B = time(b);
  B += 86400;
  B = (B - A) % 86400;
  int H = B / 3600, M = B % 3600 / 60, S = B % 3600 % 60; 
  cout << (H < 10 ? "0" : "") << H << ":" << (M < 10 ? "0" : "") << M << ":" << (S < 10 ? "0" : "") << S << '\n';
  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/