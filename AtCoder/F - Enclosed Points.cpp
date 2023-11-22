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
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define shandom_ruffle random_shuffle
 
const int MOD = 998244353;
const ll INF = 1e18;
const int MX = 998244353;
ll modExp(ll base, ll power) {
    if (power == 0) {
        return 1;
    } else {
        ll cur = modExp(base, power / 2); cur = cur * cur; cur = cur % MOD;
        if (power % 2 == 1) cur = cur * base;
        cur = cur % MOD;
        return cur;
    }
}
 
ll inv(ll base) {
    return modExp(base, MOD-2);
}
 
ll mul(ll A, ll B) {
    return (A*B)%MOD;
}
 
ll add(ll A, ll B) {
    return (A+B)%MOD;
}
 
ll dvd(ll A, ll B) {
    return mul(A, inv(B));
}
 
ll sub(ll A, ll B) {
    return (A-B+MOD)%MOD;
}
 
ll SZ = 262144;
ll* seg = new ll[2*SZ];
 
 
ll combine(ll a, ll b) { return a+b; }
 
void build() { F0Rd(i,SZ) seg[i] = combine(seg[2*i],seg[2*i+1]); }
 
void update(int p, ll value) {
    for (seg[p += SZ] = value; p > 1; p >>= 1)
        seg[p>>1] = combine(seg[(p|1)^1], seg[p|1]);
}
 
ll query(int l, int r) {  // sum on interval [l, r]
    ll resL = 0, resR = 0; r++;
    for (l += SZ, r += SZ; l < r; l >>= 1, r >>= 1) {
        if (l&1) resL = combine(resL,seg[l++]);
        if (r&1) resR = combine(seg[--r],resR);
    }
    return combine(resL,resR);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int N; cin >> N;
 
    vi preX, preY;
    vi sortX, sortY;
    map<int, int> xComp, yComp;
    F0R(i, N) {
        int X, Y; cin >> X >> Y;
        preX.pb(X); preY.pb(Y);
        sortX.pb(X); sortY.pb(Y);
    }
    sort(all(sortX)); sort(all(sortY));
    F0R(i, N) {
        xComp.insert(mp(sortX[i], i));
        yComp.insert(mp(sortY[i], i));
    }
 
    int yVals[N];
    F0R(i, N) {
        yVals[xComp[preX[i]]] = yComp[preY[i]];
	} 
    F0R(i, 2*SZ) seg[i] = 0;
    ll ans = 0;
    F0R(i, N) {
        ans = add(ans, modExp(2, N));
 
        int countAbove = N - yVals[i] - 1;
        int countBelow = yVals[i];
        int countLeft = i;
        int countRight = N-i-1;
        ans = sub(ans, modExp(2, countAbove));
        ans = sub(ans, modExp(2, countBelow));
        ans = sub(ans, modExp(2, countLeft));
        ans = sub(ans, modExp(2, countRight));
 
        int leftAbove = query(yVals[i], N);
        int leftBelow = query(0, yVals[i]);
        int rightAbove = countAbove - leftAbove;
        int rightBelow = countBelow - leftBelow;
 
        ans = add(ans, modExp(2, leftAbove));
        ans = add(ans, modExp(2, leftBelow));
        ans = add(ans, modExp(2, rightAbove));
        ans = add(ans, modExp(2, rightBelow));
 
        ans = sub(ans, 1);
        update(yVals[i], 1);
    }
    cout << ans << endl;
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
