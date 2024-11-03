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
int a, b;
int coins[] = {100, 50, 20, 10, 5, 2, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n) {
        printf("%d\n", n);
        int notas;
        FOR(i, 0, 7) {
            notas = n/coins[i];
            printf("%d nota(s) de R$ %d,00\n", notas, coins[i]);
            n -= notas*coins[i];
        }
    }
    return 0;
}