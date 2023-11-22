/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<int> merge(vector<int> l, vector<int> r){
    
  vector<int> m;
    
  for(int i = 0, j = 0; i < l.size() || j < r.size();){
    if(i < l.size() && (j == r.size() || l[i] < r[j])){
      m.push_back(l[i]);
      i++;
    }
    else{
      m.push_back(r[j]);
      j++;
    }
  }
    
  return m;
}

vector<int> merge_sort(vector<int> v){
  if(v.size() == 1) return v;
    
  vector<int> l, r;
    
  for(int i = 0; i < v.size() / 2; ++i){
    l.push_back(v[i]);
  }
  for(int i = v.size() / 2; i < v.size(); ++i){
    r.push_back(v[i]);
  }
    
  return merge(merge_sort(l), merge_sort(r));
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
    
  vector<int> ans = merge_sort(v);
    
  for(int i = 0; i < n; ++i){
    cout << ans[i] << " \n"[i == n - 1];
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
