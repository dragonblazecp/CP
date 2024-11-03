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
#define MAXN 1000010
#define LOGMAXN 20
#define MAXM 1000010
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
 
const ll mod = 1000000007LL;
const double pi = atan(1)*4;

bool isPrime[MAXN];

// generate up to nth prime (it will run until MAXN)
void generatePrimes(vi& primes, int n) {
    fill(isPrime, isPrime+MAXN, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= MAXN; ++i) {
        if(isPrime[i]) {
            primes.pb(i);
            if(primes.size() == n) break;
            for(ll j = (ll) i*i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> prime;
    generatePrimes(prime, 3501);
    int n;
    while(cin >> n) {
        if(n == 0) break;
        vector<int> v(n);
        FOR(i, 0, n) {
            v[i] = i+1;
        }
        int pos = n-1;
        FOR(i, 0, n-1) {
            pos = (pos+prime[i])%v.size();
            v.erase(v.begin()+pos);
            pos--;
        }
        printf("%d\n", v[0]);
    }
    return 0;
}