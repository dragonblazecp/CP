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

int n;
int dp[MAXN][2];

struct point {
    int x, y;
};

bool cmp(const point& p1, const point& p2) {
    return p1.x < p2.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n) {
        vector<point> v(n);
        set<ii> s;
        FOR(i, 0, n) {
            cin >> v[i].x >> v[i].y;
            dp[i][0] = dp[i][1] = 1;
        }
        sort(all(v), cmp);
        int ans = 1;
        map<int, list<ii>> mm;
        map<int, list<ii>>::iterator it;
        list<ii>::iterator itl;
        mm[v[n-1].y].push_front({v[n-1].x, n-1});
        RFOR(i, n-2, 0) {
            it = mm.find(v[i].y-2);
            if(it != mm.end()) {
                itl = it->snd.begin();
                if(itl->fst == v[i].x) itl++;
                if(itl != it->snd.end()) {
                    dp[i][0] = 1 + dp[itl->snd][1]; // up
                }
            }
            it = mm.find(v[i].y+2);
            if(it != mm.end()) {
                itl = it->snd.begin();
                if(itl->fst == v[i].x) itl++;
                if(itl != it->snd.end()) {
                    dp[i][1] = 1 + dp[itl->snd][0]; // down
                }
            }
            ans = max(ans, max(dp[i][0], dp[i][1]));
            mm[v[i].y].push_front({v[i].x, i});
        }
        printf("%d\n", ans);
    }
    return 0;
}