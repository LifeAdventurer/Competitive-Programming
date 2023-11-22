/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.08.2023 17:14:00
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  multiset<int> l, r;
  
  auto Insert = [&](int x){
    if(l.empty() || x <= *l.rbegin()){
      l.insert(x);
    } 
    else{
      r.insert(x);
    } 
  };

  auto Check = [&](){
    if(l.size() > r.size() + 1){
      r.insert(*l.rbegin());  
      l.erase(l.find(*l.rbegin()));
    }
    else if(r.size() > l.size()){
      l.insert(*r.begin());
      r.erase(r.find(*r.begin()));
    }
  };

  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    Insert(x);
    Check();
    if(i & 1){
      cout << *l.rbegin() << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/