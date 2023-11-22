#include <bits/stdc++.h>
using namespace std;
#define Gura_is_cute ios_base::sync_with_stdio(0);cin.tie(0)
#define lli long long int
#define F first
#define S second
#define pb push_back
lli t, n, p[200005], cnt;
pair<lli, lli> a[200005];
vector<lli> v[200005];
lli dfs(int idx){
    if(v[idx].size()==0){
        return a[idx].S;
    }
    lli ad=0;
    for(int i=0;i<v[idx].size();i++){
        if(i>0){cnt++;}
        ad+=dfs(v[idx][i]);
    }
    if(ad>=a[idx].S){
        ad=a[idx].S;
    }
    else if(ad<a[idx].F){
        cnt++;
        ad=a[idx].S;
    }
    return ad;
}
void sol(){
    cin >> n;
    for(int i=1;i<=n;i++)v[i].clear();
    for(int i=2;i<=n;i++){
        cin >> p[i];
        v[p[i]].pb(i);
    }
    for(int i=1;i<=n;i++)cin >> a[i].F >> a[i].S;
    cnt=1;
    dfs(1);
    cout << cnt << endl;
}
int main(){
    Gura_is_cute;
    cin >> t;
    while(t--){
        sol();
    }
}
