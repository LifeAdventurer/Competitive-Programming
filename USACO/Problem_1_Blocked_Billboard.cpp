/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long fastpow(long long x, long long y, int mod){
  x %= mod;
  long long res = 1;
  while(y){
    if(y & 1) res = res * x % mod;
    y >>= 1;
    x = x * x % mod;
  }
  return res;
}

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

struct Rect{
  int x1, x2, y1, y2;
  int area(){
    return (x2 - x1) * (y2 - y1);
  }
};

int overlap(Rect p, Rect q){
  int x = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x * y;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifdef ONLINE_JUDGE
  setIO("billboard");
#endif
  vector<Rect> v(3);
  for(int i = 0; i < 3; ++i){
    cin >> v[i].x1 >> v[i].y1 >> v[i].x2 >> v[i].y2;   
  }

  cout << v[0].area() + v[1].area() - overlap(v[0], v[2]) - overlap(v[1], v[2]) << '\n';

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