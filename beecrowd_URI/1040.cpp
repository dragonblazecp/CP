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
    double v[4];
    double avg[4] = {2.0, 3.0, 4.0, 1.0};
    while(cin >> v[0] >> v[1] >> v[2] >> v[3]) {
        double mean = 0.0;
        FOR(i, 0, 4) {
            mean += v[i]*avg[i];
        }
        mean /= 10.0;
        printf("Media: %.1f\n", mean);
        if(mean >= 7.0) {
            printf("Aluno aprovado.\n");
        } else if(mean < 5.0) {
            printf("Aluno reprovado.\n");
        } else {
            printf("Aluno em exame.\n");
            double exam;
            cin >> exam;
            printf("Nota do exame: %.1f\n", exam);
            mean = (mean+exam)/2.0;
            if(mean >= 5.0) {
                printf("Aluno aprovado.\n");
            } else {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", mean);
        }
    }
    return 0;
}