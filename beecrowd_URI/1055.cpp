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
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int j = n-1;
        int i = 1;
        int ans = 0;
        for(; j-i > 1; i++, j--)
        {
            ans += ((v[j] - v[i-1]) + (v[j] - v[i]));;
        }
        if(i == j)
            ans += (v[i] - v[0]);
        else
            ans += ((v[j] - v[i-1]) + max((v[i] - v[0]), (v[j] - v[i])));
        j = n-2;
        i = 0;
        int tmp = 0;
        for(; j-i > 1; i++, j--)
        {
            tmp += ((v[j+1] - v[i]) + (v[j] - v[i]));
        }
        if(i == j)
            tmp += (v[n-1] - v[i]);
        else
            tmp += ((v[j+1] - v[i]) + max((v[n-1] - v[j]), (v[j] - v[i])));
        ans = max(ans, tmp);
        cout << "Case " << t << ": ";
        cout << ans << endl;
    }
    return 0;
}