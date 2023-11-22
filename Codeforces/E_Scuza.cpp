#include <bits/stdc++.h>
 
using namespace std;
 
#define all(x) begin(x), end(x)
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
    
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    vector<long long> pre(n), mx(n);
    cin >> pre[0];
    mx[0] = pre[0];
    for(int i = 1; i < n; ++i){
      cin >> pre[i];
      mx[i] = max(mx[i - 1], pre[i]);
    }
    partial_sum(all(pre), pre.begin());
    while(q--){
      int x;
      cin >> x;
      auto it = upper_bound(all(mx), x);
      if(it == mx.begin()) cout << 0 << " ";
      else cout << pre[--it - mx.begin()] << " ";
    }
    cout << '\n';
  }
    
  return 0;
}