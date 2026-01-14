#include <bits/stdc++.h>
using namespace std;
const int mx = 1e8;
bitset<mx> isPrime;
vector<int> primes;

void sievePrime(int n){
    for (int i = 3; i<=n; i+=2)isPrime[i]=1;
    isPrime[2]=1;
    for (int i=3; i<=sqrt(n); i+=2){
        if (isPrime[i]){
            for (int j=i*i; j<=n; j+=i){
                isPrime[j]=0;
            }
        }
    }
}

int main (){
    int lim=1e8;
    sievePrime(lim);
    int n; cin >> n;
    if (n<=2)cout << 1 << endl;
    else cout << 2 << endl;

    for (int i=1; i<=n; i++){
        if (isPrime[i+1])cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;

}