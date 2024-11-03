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
    int n;
    map<int, string> mm;
    mm[1] = "January";
    mm[2] = "February";
    mm[3] = "March";
    mm[4] = "April";
    mm[5] = "May";
    mm[6] = "June";
    mm[7] = "July";
    mm[8] = "August";
    mm[9] = "September";
    mm[10] = "October";
    mm[11] = "November";
    mm[12] = "December";
    while(cin >> n) {
       printf("%s\n", mm[n].c_str()); 
    }
    return 0;
}