#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int mx = 1e8;
bitset<mx> isPrime;
vector<int> primes;

void sievePrime(int n){
    for (int i=3; i<=n; i+=2)isPrime[i]=1;

    for (int i=3; i<=sqrt(n); i+=2){
        if (isPrime[i]){
            for (int j=i*i; j<=n; j+=i){
                isPrime[j]=0;
            }
        }
    }
    primes.push_back(2); 
    for (int i=3; i<=n; i+=2){
        if (isPrime[i]){
            primes.push_back(i);
        }
    }
}

void done(){
    int d;
    cin >> d;
    ll pt=1, sm=0;
    sm = pt+d;
    int lo1 = lower_bound(primes.begin(), primes.end(), sm)-primes.begin();
    sm = primes[lo1]+d;
    int lo2 = lower_bound(primes.begin(), primes.end(), sm)-primes.begin();
    ll ans = 1LL*primes[lo1]*primes[lo2];
    cout << ans << endl;
}

int main (){
    int lim = 1e8;
    sievePrime(lim);
    int t; cin >> t;
    while (t--){
        done();
    }
}