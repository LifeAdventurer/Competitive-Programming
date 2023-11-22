#include <bits/stdc++.h>
using namespace std;
#define Gura_is_cute ios_base::sync_with_stdio(0);cin.tie(0)
#define mp make_pair
#define pb push_back
#define ll long long
#define lli long long int
#define F first 
#define S second
int t;
lli n, m, a[2000][2000];
pair<int, int> p[1500][1500];
void sol(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    if((n+m-1)%2==1){
        cout << "No\n";
        return;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            p[i][j].F=0;p[i][j].S=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            p[i][j].F=2e9;
            if(i>1){
                p[i][j].F=min(p[i-1][j].F, p[i][j].F);
                p[i][j].S=max(p[i-1][j].S, p[i][j].S);
            }
            if(j>1){
                p[i][j].F=min(p[i][j-1].F, p[i][j].F);
                p[i][j].S=max(p[i][j-1].S, p[i][j].S);
            }
            if(p[i][j].F==2e9)p[i][j].F=0;
            if(a[i][j]==1)p[i][j].F++, p[i][j].S++;
        }
    }
    int want=(n+m-1)>>1;
    if(want>=p[n][m].F && p[n][m].S>=want)cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    Gura_is_cute;
    cin >> t;
    while(t--){
        sol();
    }
}
