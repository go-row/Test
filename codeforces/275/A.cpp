//gauravsingh :)
#include <bits/stdc++.h>
using namespace std;
 
//using int = long long int;
using ll = long long int;
using pii = pair < int, int >;

#define ff first
#define ss second
#define endl '\n'
#define pb push_back

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i, j, n)	for(int i = j; i < n; i++)
#define ren(i, j, n)	for(int i = n-1; i >= j; i--)

#define cerr cout
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v) {
    cerr << t; if(sizeof...(v)) cerr << ", "; _print(v...);
}
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)

const int mod = 1000000007;

void io_set(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int dx[] = {0, -1, 0, 1, 0};
int dy[] = {0, 0, 1, 0, -1};

int ans[3][3];

void solve(){
    int n = 3;
    int a[3][3];    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            a[i][j] %= 2;
            ans[i][j] = 1;
        }
    }
    auto go = [&](int i, int j){
        for(int k = 0; k < 5; k++){
            int nx = i + dx[k];
            int ny = j + dy[k];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n){
                ans[nx][ny] ^= 1;
            }
        }
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]){
                go(i, j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}

signed main(int argc, char **argv){
    io_set();
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}

