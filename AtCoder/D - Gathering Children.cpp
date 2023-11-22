/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define MOD (ll)(1e9+7)
#define INF 1e17
#define int ll
#define EPS (1e-6)
using namespace std;
using ll=long long;
using pii=pair<int,int>;
 
int gcd(int a,int b) { return b==0?a:gcd(b,a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
 
int fpow(int b,int p)
{
	if(p==0) return 1;
	int h=fpow(b,p/2);
	if(p%2) return h*b%MOD*h%MOD;
	return h*h%MOD;
}
 
bool cmp(pii a,pii b){
	return a.S<b.S;
}
 
int find(vector<int> &dp,int t){
	int hi=sz(dp)-1,lo=-1;
	while(hi-lo>1){
		int m=(hi+lo)/2;
		if(dp[m]<=t) lo=m;
		else hi=m;
	}
	return hi;
}
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s; cin>>s;
	int n=sz(s);
	s+='R';
	int r=1,l=0;
	int i=1,tag;
	vector<int> ans(n,0);
	while(i<n){
		for(;!(s[i-1]=='L' && s[i]=='R');i++){
			if(s[i]=='R') r++;
			else l++;
			if(s[i-1]=='R' && s[i]=='L') tag=i;
		}
		if((r+l)%2==0){
			ans[tag]=(r+l)/2;
			ans[tag-1]=(r+l)/2;
		}
		else if(r%2==1){
			ans[tag]=(r+l)/2;
			ans[tag-1]=(r+l)/2+1;
		}
		else{
			ans[tag]=(r+l)/2+1;
			ans[tag-1]=(r+l)/2;
		}
		r=1,l=0;
		i++;
	}
	For(id,0,n-1) cout<<ans[id]<<" \n"[id==n-1];
	return 0;
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  

*/    

  // Be awesome ! 
  // Sabrina <3
  // u ying u <3
  // seorina <3 
  // fighting~ 
  // I will fulfill my dreams!
