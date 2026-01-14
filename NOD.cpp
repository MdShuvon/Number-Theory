#include <bits/stdc++.h>
using namespace std;
const int mx=1e8;
bitset<mx> isPrime;
vector<int> primes;

void sievePrimes(int n){
    for (int i=3; i<=n; i+=2)isPrime[i]=1;
    for (int i=3; i<=sqrt(n); i+=2){
        if (isPrime[i]){
            for (int j=i*i; j<=n; j+=i){
                isPrime[i]=0;
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

// int NOD(int n){
//     int NOD=1;
//     for (auto p: primes){
//         if (1LL*p*p>n) break;
//         if (n%p==0){
//             int cnt=0;
//             while (n%p==0){
//                 n /= p;
//                 cnt++;
//             }
//             cnt++;
//             NOD*=cnt;
//         }
//     }
//     if (n>1)NOD*=2;

//     return NOD;
//}

int NOD(int n){
    int snod=0;
    for (int i=1; i<=n; i++){
        int contributionI=n/i;
        cout << i << " : " << contributionI << '\n';
        snod+=contributionI;
    }
    cout << snod << '\n';
}

int main (){
    int lim=1e7;
    sievePrimes(lim);
    cout << NOD(50) << endl;
}