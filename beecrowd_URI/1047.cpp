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

int hours_diff(int a, int b) {
    if(b > a) return b-a;
    return 24-a+b;
}

int min_diff(int a, int b) {
    if(b > a) return b-a;
    return 60-a+b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, ma, b, mb, ans, mans;
    while(cin >> a >> ma >> b >> mb) {
        if(b < a || (b == a && mb <= ma)) {
            ans = 24-a+b - (mb < ma);
            if(ma != mb)
                mans = min_diff(ma, mb);
            else
                mans = 0;
        }
        else {
            ans = b-a - (mb < ma);
            if(ma != mb)
                mans = min_diff(ma, mb);
            else
                mans = 0;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ans, mans);
    }
    return 0;
}