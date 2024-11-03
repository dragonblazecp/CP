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
#define MAXM 1000010
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
 
const ll mod = 1000000007LL;
const double pi = atan(1)*4;

int T;
int n, M;
int dp[30][MAXM];
int v[30];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> n >> M;
        FOR(j, 1, M+1) dp[0][j] = INF;
        FOR(i, 1, n+1) { 
            cin >> v[i];
            dp[i][0] = 0;
        }
        dp[0][0] = 0;
        FOR(i, 1, n+1) {
            FOR(j, 0, M+1) {
                dp[i][j] = dp[i-1][j];
                if(v[i] <= j) dp[i][j] = min(dp[i][j], 1 + dp[i][j-v[i]]);
            }
        }
        printf("%d\n", dp[n][M]);
    }
    return 0;
}