/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main() {
  u_ying_u_with_whale;
  int n, a = 0, b = 0, x;
  cin >> n;
  deque<int> dq;
  for(int i = 0; i < n; ++i){
    cin >> x;
    dq.push_back(x);
  }
  for(int i = 0; i < n; ++i){
    if(i % 2 == 0){
      if(dq.front() > dq.back()){
        a += dq.front();
        dq.pop_front();
      }
      else{
        a += dq.back();
        dq.pop_back();
      }
    }
    else{
      if(dq.front() > dq.back()){
        b += dq.front();
        dq.pop_front();
      }
      else{
        b += dq.back();
        dq.pop_back();
      }
    }
  }
  cout << a << " " << b;

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
