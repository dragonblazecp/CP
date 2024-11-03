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
#define MAXN 1000010
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
    map<ii, string> mm;
    mm[{1, 1}] = "NE";
    mm[{1, -1}] = "SE";
    mm[{-1, 1}] = "NO";
    mm[{-1, -1}] = "SO";
    while(cin >> n) {
        if(n == 0) break;
        int x, y;
        cin >> x >> y;
        int a, b;
        FOR(i, 0, n) {
            cin >> a >> b;
            if(a == x || b == y) {
                printf("divisa\n");
                continue;
            }
            printf("%s\n", mm[{a-x > 0 ? 1 : -1, b-y > 0 ? 1 : -1}].c_str());
        }
    }
    return 0;
}