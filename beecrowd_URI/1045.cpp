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
    while(cin >> a >> b >> c) {
        if(a < b) swap(a, b);
        if(a < c) swap(a, c);
        if(b < c) swap(b, c);
        if(a >= b+c) printf("NAO FORMA TRIANGULO\n");
        else {
            if(a*a == b*b + c*c) printf("TRIANGULO RETANGULO\n");
            else if(a*a > b*b + c*c) printf("TRIANGULO OBTUSANGULO\n");
            else if(a*a < b*b + c*c) printf("TRIANGULO ACUTANGULO\n");
            if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
            else if(a == b || b == c) printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}