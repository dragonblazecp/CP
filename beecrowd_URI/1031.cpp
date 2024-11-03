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
    int n, pos;
    while(cin >> n) {
        if(n == 0) break;
        vector<int> v(n);
        FOR(i, 0, n) {
            v[i] = i+1;
        }
        int m = 0;
        while(true) {
            m++;
            vector<int> a;
            a = v;
            pos = 0;
            a.erase(a.begin());
            pos--;
            while(a.size() > 1) {
                pos = (pos+m)%a.size();
                if(a[pos] == 13) break;
                a.erase(a.begin()+pos);
                pos--;
            }
            if(a.size() == 1) {
                printf("%d\n", m);
                break;
            }
        }
    }
    return 0;
}