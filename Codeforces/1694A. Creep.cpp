#include <bits/stdc++.h>
using namespace std;
#define Gura_is_cute ios_base::sync_with_stdio(0);cin.tie(0)
#define lli long long int 
lli t, a, b;
void sol(){
    cin >> a >> b;
    for(int i=1;i<=min(a, b);i++){
        cout << "10";
    }
    int d=min(a, b);
    a-=d, b-=d;
    if(a!=0){
        for(int i=1;i<=a;i++)cout << "0";
    }
    else{
        for(int i=1;i<=b;i++)cout << "1";
    }
    cout << endl;
}
int main(){
    Gura_is_cute;
    cin >> t;
    while(t--){
        sol();
    }
}
