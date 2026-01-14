#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int N = 100000017;
bitset<N>isPrime;
vector<int> primes;

void sieve(int n){
    for (int i=3; i<=n; i+=2)isPrime[i]=1;

    for (int i=3; 1ll*i*i<=n; i+=2){
        if (isPrime[i]){
            for (int j=i*i; j<=n; j+=i){
                isPrime[j]=0;
            }
        }
    }
    primes.pb(2);
    for (int i=3; i<=n; i++){
        if (isPrime[i]){
            primes.pb(i);
        }
    }
}

vector<int> primeFectors(int n){
    vector<int> fectors;
    for (auto u: primes){
        if (1ll*u*u>n)break;
        if (n%u==0){
            while (n%u==0){
                fectors.pb(u);
                n /= u;
            }
        }
    }
    if (n>1)fectors.pb(n);
    return fectors;
}
     
int main() {
    optimize();
    sieve(10000007);

    int n;
    while (cin >> n){
        if (n==0)break;
        bool isNeg = false;
        if (n<0){
            isNeg = true;
            n *= -1;
        }
        vector<int> fectors = primeFectors(n);
        if (isNeg){
            n *= -1;
            fectors.insert(fectors.begin(), -1);
        }
        cout << n << " = " << fectors[0];
        for (int i=1; i<fectors.size(); i++){
            cout << " x " << fectors[i];
        }
        cout << nl;
    }
}