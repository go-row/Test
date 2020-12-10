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

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;    
    for(int j = 0; j < k; j++){
        for(int i = 0; i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G')    swap(s[i], s[i+1]), i++;
        }
    }
    cout << s << endl;
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

