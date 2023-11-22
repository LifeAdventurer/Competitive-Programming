#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
    }
    int mx = n, mn = 1, l = 0, r = n - 1;
    while(l < r){
      if(v[l] == mx){
        mx--;
        l++;
      }
      else if(v[l] == mn){
        mn++;
        l++;
      }
      else if(v[r] == mx){
        mx--;
        r--;
      }
      else if(v[r] == mn){
        mn++;
        r--;
      }
      else break;
    }
    if(r == l) cout << "-1\n";
    else cout << l + 1 << " " << r + 1 << '\n';
  }
    
  return 0;
}