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

double a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> a) {
        if(a < 0) {
            printf("Fora de intervalo\n");
        } else if(a <= 25) {
            printf("Intervalo [0,25]\n");
        } else if(a <= 50) {
            printf("Intervalo (25,50]\n");
        } else if(a <= 75) {
            printf("Intervalo (50,75]\n");
        } else if(a <= 100) {
            printf("Intervalo (75,100]\n");
        } else {
            printf("Fora de intervalo\n");
        }
    }
    return 0;
}