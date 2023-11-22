/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.Oct.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  string s;
  cin >> s;

  int a = 0, b = 0, c = 0;
  for(int i = 0; i < s.size(); ++i){
    char cc = s[i];
    if(cc == 'A'){
      if(i % 3 == 0) a++;
      if(i % 4 == 1) b++;
      if(i % 6 == 2 || i % 6 == 3) c++;
    }
    else if(cc == 'B'){
      if(i % 3 == 1) a++;
      if(i % 4 == 0 || i % 4 == 2) b++;
      if(i % 6 == 4 || i % 6 == 5) c++;
    }
    else{
      if(i % 3 == 2) a++;
      if(i % 4 == 3) b++;
      if(i % 6 == 0 || i % 6 == 1) c++; 
    }
  }

  int ans = max({a, b, c});
  cout << ans << '\n';
  if(a == ans) cout << "Adrian\n";
  if(b == ans) cout << "Bruno\n";
  if(c == ans) cout << "Goran\n";

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
