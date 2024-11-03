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
int n1, d1;
int n2, d2;
int num, den;
char tmp;
char op;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n) {
        while(n--) {
            cin >> n1 >> tmp >> d1 >> op;
            cin >> n2 >> tmp >> d2;
            if(op == '+') {
                num = (n1*d2+n2*d1);
                den = (d1*d2);
            } else if(op == '-') {
                num = (n1*d2-n2*d1);
                den = (d1*d2);
            } else if(op == '*') {
                num = (n1*n2);
                den = (d1*d2);
            } else {
                num = (n1*d2);
                den = (n2*d1);
            }
            if(num*den < 0) {
                printf("-%d/%d = -%d/%d\n", abs(num), abs(den), abs(num/__gcd(num, den)), abs(den/__gcd(num, den)));
            } else {
                printf("%d/%d = %d/%d\n", abs(num), abs(den), abs(num/__gcd(num, den)), abs(den/__gcd(num, den)));
            }
        }
    }
    return 0;
}