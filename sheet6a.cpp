#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long A, B;
    cin >> A >> B;
    if (A>B){
        A = A^B;
        B = A^B;
        A = A^B;
    }
    long long All = (B-A+1) * (A+B) / 2;
    cout << All << endl;
    long long feven = A%2==0 ? A : A+1;
    long long n = (B-feven+2)/2;
    long long even = n*(2*feven + (n-1)*2)/2;
    cout << even << endl;
    long long odd = All-even;
    cout << odd << endl;
}