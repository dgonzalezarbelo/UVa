#include <bits/stdc++.h>
#pragma warning (disable : 4996)
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define mp make_pair

const double EPS = 1e-9;
const double INF = 1e9; //1e18 tambien suele ir bien
using ll = long long int;
using ull = unsigned long long;
using ii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;
using vb = vector<bool>;
using vvb = vector<vb>;
using db = double;
using vdb = vector<db>;
using ldb = long double; //100 ceros pero poca precision decimal

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    for(int caso = 0; caso < t; caso++) {
        int n, p, q; cin >> n >> p >> q;
        vi v(n);
        for(int & x : v) cin >> x;
        int peso = 0, sol = 0;
        for(int i = 0; i < min(n, p); i++) {
            if(v[i] + peso <= q) {
                sol++;
                peso += v[i];
            }
        }
        cout << "Case " << caso + 1 << ": " << sol << '\n';
    }
    return 0;
}