#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int t;
    cin >> t;
    vector<int> keys(t);
    vector<bool> vis(m, false);
    for (int i = 0; i < t; i++) {
        cin >> keys[i];
        vis[keys[i]] = true;
    }
    vector<vector<int>> key_box(m);
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            key_box[x].push_back(i);
        }
    }
    vector<vector<int>> box_key(n, vector<int>(k));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> box_key[i][j];
        }
    }

    int ans = 0;
    vector<int> deg(n, k);
    while (!keys.empty()) {
        int key = keys.back();
        keys.pop_back();
        for (int box : key_box[key]) {
            if (--deg[box] == 0) {
                ans++;
                for (int obj : box_key[box]) {
                    if (!vis[obj]) {
                        keys.push_back(obj);
                        vis[obj] = true;
                    }
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}