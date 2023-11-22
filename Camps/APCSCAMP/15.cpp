/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.06.2023 22:41:05
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

typedef pair<vector<int>, long long> Data;

Data merge(Data ll, Data rr){  
  vector<int> m;
  long long cnt = ll.second + rr.second;
  auto l = ll.first, r = rr.first;
  for(int i = 0, j = 0; i < l.size() || j < r.size();){
    if(i < l.size() && (j == r.size() || l[i] < r[j])){
      m.push_back(l[i++]);
      cnt += j;
    }
    else{
      m.push_back(r[j++]);
    }
  }
    
  return {m, cnt};
}

Data solve(vector<int> v){
  if(v.size() == 1) return {v, 0};
    
  vector<int> l, r;
    
  for(int i = 0; i < v.size() / 2; ++i){
    l.push_back(v[i]);
  }
  for(int i = v.size() / 2; i < v.size(); ++i){
    r.push_back(v[i]);
  }
    
  return merge(solve(l), solve(r));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
    
  cout << solve(v).second;
    
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
