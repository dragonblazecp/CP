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

int n, m;
double x;
int a, b;
int notes[] = {100, 50, 20, 10, 5, 2, 1};
int coins[] = {50, 25, 10, 5, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> x) {
        n = (int) x;
        x -= n;
        x *= 100;
        m = (int) x;
        printf("NOTAS:\n");
        int notas;
        FOR(i, 0, 6) {
            notas = n/notes[i];
            printf("%d nota(s) de R$ %d.00\n", notas, notes[i]);
            n -= notas*notes[i];
        }
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ %d.00\n", n/notes[6], notes[6]);
        FOR(i, 0, 5) {
            notas = m/coins[i];
            printf("%d moeda(s) de R$ 0.%02d\n", notas, coins[i]);
            m -= notas*coins[i];
        }
    }
    return 0;
}