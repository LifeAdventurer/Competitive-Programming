/**
 *    author: life adventurer
 *    created: 11.06.2022 00:35:00   
**/
#include <iostream>
#include <algorithm>

using namespace std;

char str_a[105], str_b[105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n, m, k;
		string a, b, c;
		cin >> n >> m >> k >> a >> b;
		for(int i=0; i<n; i++){
			str_a[i] = a[i];
		}
		sort(str_a, str_a + n);
		for(int i=0; i<n; i++){
			a[i] = str_a[i];
		}
		for(int i=0; i<m; i++){
			str_b[i] = b[i];
		}
		sort(str_b, str_b + m);
		for(int i=0; i<m; i++){
			b[i] = str_b[i];
		}
		int q = 0, p = 0, l = 0;
		bool ok1 = true, ok2 = true;
		while(q != a.size() && p != b.size()){
			if(l<k){
				if(a[q] > b[p]){
					if(ok2){
						l = 0;
					}
					c += b[p];
					p++;
					l++;
					ok2 = false;	 
					ok1 = true;
				}
				else{
					if(ok1){
						l = 0;
					}
					c += a[q];
					q++;
					l++;
					ok1 = false;
					ok2 = true;
				}
			}
			else{
				l = 1;
				if(ok1){
					c += a[q];
					q++;
					ok1 = false;
					ok2 = true;
				}
				else{
					c += b[p];
					p++;
					ok2 = false;
					ok1 = true;
				}
			}
		}
		cout << c << '\n';
	}
	return 0;
}
