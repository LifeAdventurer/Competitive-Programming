/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 10.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int n, m;
int cnt = 1;
vector<int> v, pos;

void upd(int a, int b){
  if(v[a] > 0 && pos[v[a]] < pos[v[a] - 1]) cnt--;
  if(v[b] > 0 && pos[v[b]] < pos[v[b] - 1]) cnt--;
  if(v[a] < n - 1 && pos[v[a]] > pos[v[a] + 1]) cnt--;
  if(v[b] < n - 1 && pos[v[b]] > pos[v[b] + 1]) cnt--;
  if(v[a] + 1 == v[b] && pos[v[a]] > pos[v[b]]) cnt++;
  if(v[b] + 1 == v[a] && pos[v[a]] < pos[v[b]]) cnt++;
  swap(v[a], v[b]);
  swap(pos[v[a]], pos[v[b]]);

  if(v[a] > 0 && pos[v[a]] < pos[v[a] - 1]) cnt++;
  if(v[b] > 0 && pos[v[b]] < pos[v[b] - 1]) cnt++;
  if(v[a] < n - 1 && pos[v[a]] > pos[v[a] + 1]) cnt++;
  if(v[b] < n - 1 && pos[v[b]] > pos[v[b] + 1]) cnt++;
  if(v[a] + 1 == v[b] && pos[v[a]] > pos[v[b]]) cnt--;
  if(v[b] + 1 == v[a] && pos[v[a]] < pos[v[b]]) cnt--;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n >> m;
  v.resize(n);
  pos.resize(n);

  for(int i = 0; i < n; ++i){
    cin >> v[i];
    pos[--v[i]] = i;
  }

  for(int i = 1; i < n; ++i){
    if(pos[i] < pos[i - 1]) cnt++;
  }

  while(m--){
    int a, b;
    cin >> a >> b;
    a--, b--;
    if(a != b) upd(a, b);
    cout << cnt << '\n';
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
