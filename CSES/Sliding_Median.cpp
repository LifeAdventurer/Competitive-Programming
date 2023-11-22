/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.07.2023 14:31:58
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

  auto _insert = [&](int x){
    if(x > *l.rbegin()) r.insert(x);
    else l.insert(x);
  };

  auto _erase = [&](int x){
    if(l.find(x) != l.end()) l.erase(l.find(x));
    else r.erase(r.find(x));
  };

  auto check = [&](){
    if((int)r.size() > k / 2){
      l.insert(*r.begin());
      r.erase(r.find(*r.begin()));
    }
    if((int)l.size() > (k + 1) / 2){ 
      r.insert(*l.rbegin());
      l.erase(l.find(*l.rbegin()));
    }
  };
  cin >> v[0];
  l.insert(v[0]);
  for(int i = 1; i < n; ++i){
    cin >> v[i];
    if(i < k){
      _insert(v[i]);
      check();
    }
    else{
      cout << *l.rbegin() << " ";
      _insert(v[i]);
      check();
      _erase(v[i - k]);
      check();
    }
  }
  cout << *l.rbegin() << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
