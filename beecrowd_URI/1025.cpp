#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, bool> ib;
 
#define FOR(a, b, c) for(int a = b; a < c; ++a)
#define RFOR(a, b, c) for(int a = b; a >= c; --a)
#define mp(a, b) make_pair(a, b)
#define all(v) v.begin(), v.end()
#define pb(a) push_back(a)
 
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define vb vector<bool>
#define fst first
#define snd second
#define MAXN 100010
#define LOGMAXN 20
#define MAXM 210
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
 
const ll mod = 1000000007LL;
const double pi = atan(1)*4;

int n, q;
int x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 0;
    while(cin >> n >> q) {
        if(n == 0 && q == 0) break;
        printf("CASE# %d:\n", T++ + 1);
        vector<int> v(n);
        vector<int>::iterator it;
        FOR(i, 0, n) {
            cin >> x;
            v[i] = x;
        }
        sort(all(v));
        FOR(i, 0, q) {
            cin >> x;
            it = lower_bound(all(v), x);
            if(it == v.end() || *it != x) printf("%d not found\n", x);
            else printf("%d found at %d\n", x, distance(v.begin(), it)+1);
        }
    }
    return 0;
}