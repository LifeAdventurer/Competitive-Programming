/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define I_want_to_be_dian  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  I_want_to_be_dian;
  string c, x;
  getline(cin, c);
  getline(cin, x);
  c += ' ';
  x += ' ';
  string s = "";
  vector<int> v;
  for(char a : c){
    if(a != ' '){
       s += a;
    }
    else{
      v.push_back(stoi(s));
      s = "";
    }
  }
  vector<int> p;
  for(char a : x){
    if(a != ' '){
      s += a;
    }
    else{
      p.push_back(stoi(s));
      s = "";
    }
  }
  for(int j = 0; j < p.size(); ++j){
    long long ans = 0, k = 1;
    for(int i = v.size() - 1; i >= 0; --i){
      ans += v[i] * k;
      k *= p[j];
    }
    cout << ans << " \n"[j == p.size() - 1];
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
