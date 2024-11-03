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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a;
    char b;
    map<char, int> mm;
    mm['C'] = 0;
    mm['R'] = 0;
    mm['S'] = 0;
    int tot = 0;
    FOR(i, 0, n) {
        cin >> a >> b;
        mm[b] += a;
        tot += a;
    }
    printf("Total: %d cobaias\n", tot);
    printf("Total de coelhos: %d\n", mm['C']);
    printf("Total de ratos: %d\n", mm['R']);
    printf("Total de sapos: %d\n", mm['S']);
    printf("Percentual de coelhos: %.2f %\n", (double) mm['C']/tot*100.00);
    printf("Percentual de ratos: %.2f %\n", (double) mm['R']/tot*100.00);
    printf("Percentual de sapos: %.2f %\n", (double) mm['S']/tot*100.00);
    return 0;
}