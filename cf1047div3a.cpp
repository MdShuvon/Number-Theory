#include <bits/stdc++.h>
using namespace std;
#define lp(i, a, b) for (int i = a; i < b; ++i)
#define mod 1e9+7
#define pb push_back
#define ff first
#define ss second
#define pii pair<int ,int>
#define ll long long
#define vi vector<int>
#define vpii vector<pii>
#define vll vector<ll>
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define bitcnt(n) __builtin_popcountll(n)
#define bitclz(n) __builtin_clz(n)
#define bitctz(n) __builtin_ctz(n)
#define bitprt(n) __builtin_parity(n)
#define bitff(n) __builtin_ffs(n)

string toBinary(ll n) {
    if (n == 0) return "0";
    string s = bitset<32>(n).to_string();
    return s.substr(s.find('1'));
}

void done() {
    int k, x;
    cin >> k >> x;
    int ans =0;
    for (int i=0; i<k; i++){
        x = x*2;
    }
    
    cout << x << endl;
}

int main() {
    optimize();
    int t; cin >> t;
    while (t--)done();
}
