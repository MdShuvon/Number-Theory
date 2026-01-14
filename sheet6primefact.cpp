#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8;
bitset<mx> isPrime;
vector<int> primes;

void sievePrimes (int n){
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

vector<int> primeFactors(int n){
    vector<int> factors;
    for (auto p: primes){
        if (1LL*p*p>n) break;
        if (n%p==0){
            while (n%p==0){
                factors.push_back(p);
                n /= p;
            }
        }
    }
    if (n>1)factors.push_back(n);
    return factors;
}

int main (){
    int lim=1e7;
    sievePrimes(lim);
    int n; cin >> n; 
    vector<int> factors=primeFactors(n);
    map<int, int> cnt;
    for (auto f: factors){
        cnt[f]++;
    }
    string res="";
    for (auto m: cnt){
        res += "("+to_string(m.first)+"^"+to_string(m.second)+")*";
    }
    res.pop_back();
    cout << res << endl;
}