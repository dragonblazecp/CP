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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a, b, c;
    double tmpa, tmpb, tmpc;
    while(cin >> a >> b >> c) {
        tmpa = a;
        tmpb = b;
        tmpc = c;
        if(tmpa < tmpb) swap(tmpa, tmpb);
        if(tmpa < tmpc) swap(tmpa, tmpc);
        if(tmpb+tmpc > tmpa) {
            printf("Perimetro = %.1f\n", a+b+c);
        } else {
            printf("Area = %.1f\n", c*min(a, b)+(c*abs(a-b)/2.0));
        }
    }
    return 0;
}