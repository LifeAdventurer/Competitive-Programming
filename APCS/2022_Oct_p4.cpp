#include <bits/stdc++.h>

using namespace std;

const int N = 305;

int a[N][N];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      cin >> a[i][j];
    }
  }

  int dx[] = {0, 0, 1,-1};
  int dy[] = {1,-1, 0, 0};
  function<int(int)> Check = [&](int k){
    int dis[N][N];
    memset(dis, -1, sizeof(dis));
    dis[1][1] = 0;

    queue<pair<int, int>> q;
    q.push({1, 1});
    while(!q.empty()){
      auto [x, y] = q.front();
      q.pop();
      for(int i = 0; i < 4; ++i){
        int X = x + dx[i];
        int Y = y + dy[i];
        if(X <= 0 || X > n || Y <= 0 || Y > n || dis[X][Y] != -1) continue;
        if(abs(a[X][Y] - a[x][y]) <= k){
          dis[X][Y] = dis[x][y] + 1;
          q.push({X, Y});
        }    
      }
    }
    return dis[n][n];
  };

  int l = 0, r = (1 << 20), ans = 0;
  while(l < r){
    int mid = (l + r) >> 1;
    int ret = Check(mid);
    if(ret != -1){
      r = mid;
      ans = ret;
    }
    else l = mid + 1;
  }
  cout << r << '\n' << ans << '\n';

  return 0;
}
