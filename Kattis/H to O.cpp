/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  long long n;
  string s, s2, p = "";
  cin >> s >> n >> s2;
  vector<long long> v(26, 0), t(26, 0);
  for(unsigned int i = 0; i < s.size(); ++i){
    if(isalpha(s[i + 1]) || i == s.size() - 1){
      v[s[i] - 'A'] += n;
    }
    else{
      int q = s[i] - 'A';
      while(i < s.size() - 1 && !isalpha(s[i + 1])){
        ++i;
        p += s[i];
      }
      v[q] += stoi(p) * n;
      p = "";
    }
  }
  for(unsigned int i = 0; i < s2.size(); ++i){
    if(isalpha(s2[i + 1]) || i == s2.size() - 1){
      t[s2[i] - 'A'] += 1;
    }
    else{
      int q = s2[i] - 'A';
      while(i < s2.size() - 1 && !isalpha(s2[i + 1])){
        ++i;
        p += s2[i];
      }
      t[q] += stoi(p);
      p = "";
    }
  }
  long long ans = 1e12;
  for(int i = 0; i < 26; ++i){
    if(t[i] > 0){
      ans = min(ans, v[i] / t[i]);
    } 
  }
  cout << ans << '\n';

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
