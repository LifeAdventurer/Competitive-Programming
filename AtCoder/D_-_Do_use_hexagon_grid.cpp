/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<vector<bool>> mp(2005, vector<bool>(2005, false));

int dx[] = {-1,-1, 0, 0, 1, 1};
int dy[] = {-1, 0,-1, 1, 0, 1};

bool in_map(int x, int y){
	if(x >= 0 && y >= 0 && x <= 2000 && y <= 2000) return true;
	return false;
}

void dfs(int x, int y){
	mp[x][y] = false;
	for(int i = 0; i < 6; ++i){
		int p = x + dx[i];
		int q = y + dy[i];
		if(in_map(p, q) && mp[p][q] == true){
			dfs(p, q);
		}
	}
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--){
    int x, y;
    cin >> x >> y;
    mp[x + 1000][y + 1000] = true;
  }
  int cnt = 0;
  for(int i = 0; i <= 2000; ++i){
    for(int j = 0; j <= 2000; ++j){
      if(mp[i][j]){
        dfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << '\n';

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
