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
    double x, y;
    map<ii, string> mm;
    mm[{1, 1}] = "Q1";
    mm[{1, -1}] = "Q4";
    mm[{-1, 1}] = "Q2";
    mm[{-1, -1}] = "Q3";
    while(cin >> x >> y) {
        if(x == 0.0 && y == 0.0) printf("Origem\n");
        else if(x == 0.0) printf("Eixo Y\n");
        else if(y == 0.0) printf("Eixo X\n");
        else printf("%s\n", mm[mp(x > 0.0 ? 1 : -1, y > 0.0 ? 1 : -1)].c_str());
    }
    return 0;
}