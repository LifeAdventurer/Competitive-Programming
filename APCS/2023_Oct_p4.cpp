#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    vector<int> dp(k + 1, 0), ndp(k + 1, 0);
    for (int i = 0; i < n; i++) {
        ndp[0] = max(dp[0], 0) + v[i];
        for (int j = 1; j <= k; j++) {
            ndp[j] = max(dp[j - 1], dp[j] + v[i]);
        }
        swap(dp, ndp);
        ans = max(ans, dp[k]);
    }
    cout << ans << '\n';

    return 0;
}