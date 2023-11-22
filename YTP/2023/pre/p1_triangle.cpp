/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.07.2023 17:13:30
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long len(long long a, long long b){
  return (abs(a - b) * abs(a - b));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  vector<long long> p, q;
  p.push_back(len(a, c) + len(b, d));
  p.push_back(len(a, e) + len(b, f));
  p.push_back(len(c, e) + len(d, f));
  cin >> a >> b >> c >> d >> e >> f;
  q.push_back(len(a, c) + len(b, d));
  q.push_back(len(a, e) + len(b, f));
  q.push_back(len(c, e) + len(d, f));
  sort(all(p));
  sort(all(q));
  int k;
  cin >> k;
  while(k--){
    cin >> a >> b >> c >> d >> e >> f;
    vector<long long> t;
    t.push_back(len(a, c) + len(b, d));
    t.push_back(len(a, e) + len(b, f));
    t.push_back(len(c, e) + len(d, f));
    sort(all(t));
    if(t == p) cout << "Nijika\n";
    else if(t == q) cout << "Doritos\n";
    else cout << "None\n";
  }
  
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
