#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  s += ",0";

  function<long long(int, int)> Solve = [&](int l, int r){
    long long cur = 0, mx = -1e18, mn = 1e18, res = 1, sum = 0;
    for(int i = l; i <= r; ++i){
      if(s[i] == ','){
        res *= sum + cur;
        mx = max(mx, res);
        mn = min(mn, res);
        cur = sum = 0;
        res = 1;
      }
      else if(s[i] == '*'){
        res *= sum + cur;
        sum = cur = 0;
      }
      else if(s[i] == '+'){
        sum += cur;
        cur = 0;
      }
      else if(s[i] == 'f'){
        int p = 0, cnt = 0;
        for(int j = i + 1; j <= r; ++j){
          if(s[j] == ')'){
            cnt--;
            if(cnt == 0){
              p = j - 1;
              break;
            }
          }
          else if(s[j] == '(') cnt++;
        }
        cur = Solve(i + 2, p);
        i = p + 1;
      }
      else{
        cur = cur * 10 + (s[i] - '0');
      }
    }
    res *= sum + cur;
    mx = max(mx, res);
    mn = min(mn, res);
    return mx - mn;
  };

  cout << Solve(0, s.size() - 1) << '\n';

  return 0;
}