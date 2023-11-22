/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 29.07.2023 16:05:43
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  multiset<int> l, r;
  long long lsum = 0, rsum = 0;
  auto _insert = [&](int x){
    if(x > *l.rbegin()){
      r.insert(x);
      rsum += x;
    } 
    else{
      l.insert(x);
      lsum += x;
    } 
  };
 
  auto _erase = [&](int x){
    if(l.find(x) != l.end()){
      l.erase(l.find(x));
      lsum -= x;
    } 
    else{
      r.erase(r.find(x));
      rsum -= x;
    } 
  };
 
  auto check = [&](){
    if((int)r.size() > k / 2){
      int x = *r.begin();
      lsum += x;
      rsum -= x;
      l.insert(x);
      r.erase(r.find(x));
    }
    if((int)l.size() > (k + 1) / 2){ 
      int x = *l.rbegin();
      rsum += x;
      lsum -= x;
      r.insert(x);
      l.erase(l.find(x));
    }
  };
  cin >> v[0];
  l.insert(v[0]);
  lsum += v[0];
  for(int i = 1; i < n; ++i){
    cin >> v[i];
    if(i < k){
      _insert(v[i]);
      check();
    }
    else{
      cout << rsum - lsum + (k & 1 ? *l.rbegin() : 0) << " ";
      _insert(v[i]);
      check();
      _erase(v[i - k]);
      check();
    }
  }
  cout << rsum - lsum + (k & 1 ? *l.rbegin() : 0) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
