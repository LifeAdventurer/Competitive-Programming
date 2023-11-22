/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<map<int, int>> v(n - 1);

    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n - 1; ++j){
        int x;
        cin >> x;
        v[j][x]++;
      }
    }

    vector<int> ans;
    for(auto x : v){
      vector<int> q;
      for(auto p : x){
        q.push_back(p.first);
        q.push_back(p.second);
      }
      if(ans.empty()){
        if(q[1] < q[3]){
          ans.push_back(q[2]);
          ans.push_back(q[0]);
        }
        else{
          ans.push_back(q[0]);
          ans.push_back(q[2]);
        }
      }
      else{
        if(ans.back() != q[0]){
          ans.push_back(q[0]);
        }
        else ans.push_back(q[2]);
      }
    }

    for(int i = 0; i < ans.size(); ++i){
      cout << ans[i] << " \n"[i == ans.size() - 1];
    }
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
