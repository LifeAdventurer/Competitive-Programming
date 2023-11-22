#include <bits/stdc++.h>
using namespace std;
#define Gura_is_cute ios_base::sync_with_stdio(0);cin.tie(0)
#define lli long long int 
lli t, n, a[200005];
void sol(){
    cin >> n;
    for(int i=1;i<=n;i++)cin >> a[i];
    lli cnt=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]==0)continue;
        else{
            if(cnt<=0){
                cout << "No\n";
                return;
            }
            cnt+=a[i];  
        }
    }
    if(cnt==0)cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    Gura_is_cute;
    cin >> t;
    while(t--){
        sol();
    }
}
