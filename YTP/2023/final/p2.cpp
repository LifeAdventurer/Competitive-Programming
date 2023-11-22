#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define phb push_back
#define ppb pop_back
#define F first
#define S second
const int maxn = 3e5 + 5;

void run(){
	int n, ans = 0, it = 0;
	cin >> n;
  vector<int> p(n + 1), l(n + 1);
  vector<pair<int, int>> a(n + 1);
	queue<pair<int, int>> q;
	for(int i = 1; i <= n; i++){
    int x;
		cin >> x;
		a[i] = {x, i};
	}
	sort(1 + a.begin(), a.end());
	for(int i=1;i<=n;i++){
		if(a[i].F == 0) q.push(a[i]);
		else {
			it=i;
			break;
		}
	}
	while(!q.empty()){
		for(int i=0;i<a[it].F;i++){
			pair<int, int> y = q.front();
			q.pop();
			p[y.S]=a[it].S;
			l[a[it].S]=max(l[y.S]+1, l[a[it].S]);
			ans=max(ans, l[a[it].S]);
		}
		if(it != n) q.push(a[it]);
		it++;
	}
	cout << ans << '\n';
	cout << p[1];
	for(int i=2;i<=n;i++){
		cout << ' '<<p[i];
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
  cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		run(); 
  }
	
	return 0;
}