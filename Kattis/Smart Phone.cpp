/**
 *    author: life adventurer
 *    created: 01.06.2022 11:21:20   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, ans;
	cin >> tt;
	while(tt--){
		ans = 0;
		string g, w, s, p, d;
		cin >> g >> w >> s >> p >> d;
		for(int i=0;i<g.size();i++){
			if(g[i] != w[i]){
				ans = g.size() + w.size() - 2*i;
				break;
			}
			else if(i == g.size()-1){
				ans = g.size() + w.size() - 2*(i+1);
			}	
		}
		for(int i=0;i<g.size();i++){
			if(g[i] != s[i]){
				if(g.size() + s.size() - 2*i + 1 < ans){
					ans = g.size() + s.size() - 2*i + 1;	
				}
				break;
			}
			else if(i == g.size()-1 && g.size() + s.size() - 2*(i+1) + 1 < ans){
				ans = g.size() + s.size() - 2*(i+1) + 1;
			}
		}
		for(int i=0;i<g.size();i++){
			if(g[i] != p[i]){
				if(g.size() + p.size() - 2*i + 1 < ans){
					ans = g.size() + p.size() - 2*i + 1;
				}
				break;
			}	
			else if(i == g.size()-1 && g.size() + p.size() - 2*(i+1) + 1 < ans){
				ans = g.size() + p.size() - 2*(i+1) + 1;
			}
		}
		for(int i=0;i<g.size();i++){
			if(g[i] != d[i]){
				if(g.size() + d.size() - 2*i + 1 < ans){
					ans = g.size() + d.size() - 2*i + 1;	
				}
				break;
			}
			else if(i == g.size()-1 && g.size() + d.size() - 2*(i+1) + 1 < ans){
				ans = g.size() + d.size() - 2*(i+1) + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
