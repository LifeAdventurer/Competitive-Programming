#include <bits/stdc++.h>

using namespace std;

int p = 0;
string s;

long long Solve(int &head, int &tail){
  long long res = 0;
  head = tail = -1;
  while(true){
    if(p == s.size()) return res;
    if(s[p] == 'T'){
      int x = stoi(s.substr(p + 1, 2));
      p += 3;
      if(tail == -1) head = x;
      else res += abs(tail - x);
      tail = x;
    }
    else if(s[p] == 'L'){
      int times = stoi(s.substr(p + 1, 1));
      p += 2;
      int l, r;
      long long ret = Solve(l, r);
      if(tail < 0) head = l;
      else res += abs(tail - l);
      tail = r;
      res += ret * times + abs(l - r) * (times - 1);
    }
    else{
      p++;
      return res;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;

  int l, r;
  cout << Solve(l, r) + abs(10 - l) << '\n';

  return 0;
}