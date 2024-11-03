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
 
ll mod = 1000000007LL;
const double pi = atan(1)*4;

ll n;
int m;
const int N = 3;
ll fib[N][N]; // Fibonacci Calls Recursion Matrix
ll ans[N][N];
ll tmp[N][N];

void ones(ll ans[][N]) {
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            ans[i][j] = (i == j ? 1LL : 0LL);
        }
    }
}

void multiplyMatrix(ll A[][N], ll B[][N]) {
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            tmp[i][j] = 0;
            FOR(k, 0, N) {
                tmp[i][j] += A[i][k]*B[k][j];
                tmp[i][j] %= mod;
            }
        }
    }
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            A[i][j] = tmp[i][j];
        }
    }
}

void binPowMat(ll n) {
    ones(ans);
    while(n > 0) {
        if(n & 1) {
            multiplyMatrix(ans, fib);
        }
        multiplyMatrix(fib, fib);
        n >>= 1;
    }
}

ll fibonacci(ll n) {
    fib[0][0] = 1;
    fib[0][1] = 1;
    fib[0][2] = 1;
    fib[1][0] = 1;
    fib[1][1] = 0;
    fib[1][2] = 0;
    fib[2][0] = 0;
    fib[2][1] = 0;
    fib[2][2] = 1;
    binPowMat(n);
    return (ans[0][0] + ans[0][1] + ans[0][2])%mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    while(cin >> n >> mod) {
        if(n == 0 && mod == 0) break;
        printf("Case %d: %lld %lld %lld\n", T++, n, mod, fibonacci(n-1));
    }
    return 0;
}