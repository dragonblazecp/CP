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
int x, y;
int sx, sy;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz = 0;
    while(cin >> n) {
        if(n == 0) break;
        if(sz > 0) putchar('\n');
        printf("Cidade# %d:\n", sz+1);
        map<int, int> mm;
        int val;
        sx = sy = 0;
        FOR(i, 0, n) {
           cin >> x >> y;
           sx += x;
           sy += y;
           val = y/x;
           if(mm.find(val) == mm.end()) {
                mm[val] = x;
           } else {
                mm[val] += x;
           }
        }
        int idx = 0;
        for(auto it = mm.begin(); it != mm.end(); ++it) {
            if(idx > 0) putchar(' ');
            printf("%d-%d", it->snd, it->fst);
            idx++;
        }
        putchar('\n');
        printf("Consumo medio: %.2f m3.\n",  ((int) ((double) sy/sx*100.0))/100.0);
        sz++;
    }
    return 0;
}