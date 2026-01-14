#include<bits/stdc++.h>
using namespace std;

const int mx=1e9;
bitset<mx> isPrime;
// bool isPrime[mx];
vector<int> primes;

// void sievePrime(int n){
//     for (int i=2; i<=n; i++){
//         isPrime[i]=1;
//     }
//     for (int i=2; i<=n; i++){
//         for (int j=i+i; j<=n; j+=i){
//             isPrime[j]=0;
//         }
//     }
//     for (int i=2; i<=n; i++){
//         if (isPrime[i] == 1){
//             primes.push_back(i);
//         }
//     }
// }



// void sievePrime(int n){// More optimized
//     for (int i=3; i<=n; i+=2){
//         isPrime[i]=1;
//     }
//     for (int i=3; i<=n; i+=2){
//         for (int j=i+i; j<=n; j+=i){
//             isPrime[j]=0;
//         }
//     }

//     primes.push_back(2);
//     for (int i=3; i<=n; i+=2){
//         if (isPrime[i] == 1){
//             primes.push_back(i);
//         }
//     }
// }


// void sievePrime(int n){// More optimized Sqrt(n)
//     for (int i=3; i<=n; i+=2){
//         isPrime[i]=1;
//     }
//     int sq = sqrt(n);
//     for (int i=3; i<=sq; i+=2){
//         for (int j=i+i; j<=n; j+=i){
//             isPrime[j]=0;
//         }
//     }

//     primes.push_back(2);
//     for (int i=3; i<=n; i+=2){
//         if (isPrime[i] == 1){
//             primes.push_back(i);
//         }
//     }
// }


//O(n)
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


int main (){
    int lim=1e8;
    sievePrime(lim);
    cout << primes[primes.size()-1] << endl;
}