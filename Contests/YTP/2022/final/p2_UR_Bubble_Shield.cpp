/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.07.2023 11:22:23
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  double x = 0.0;

  vector<long long> v, v2;
  double a;
  while(cin >> a){
    v.push_back(a);
  }

  auto solve = [&]() -> double{
    double sum = 0;
    int p = v.size() - 1;
    for(int i = 0; i < (int)v.size(); ++i){
      sum += v[i] * pow(x, p);
      p--;
    }
    return sum;
  };

  auto solve2 = [&]() -> double{
    double sum = 0;
    int p = v2.size() - 1;
    for(int i = 0; i < (int)v2.size(); ++i){
      sum += v2[i] * pow(x, p);
      p--;
    }
    return sum;
  };


  auto d = [&]() -> void{
    v2 = v;
    v2.pop_back();
    int p = v2.size();
    for(int i = 0; i < (int)v2.size(); ++i){
      v2[i] *= double(p);
      p--;
    }
  };
  d();

  double f = solve(), df;
  while(abs(f) > 0.0001){
    f = solve();
    df = solve2();
    x = x - f / df;
  }

  cout << fixed << setprecision(2) << x << '\n';

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
