#include <bits/stdc++.h>
using namespace std;

void done (){
    long long a, b; cin >> a >> b;
    if (b==1){cout << "NO\n";return;}
    long long p = (a*b)+a;
    long long t = p/a;
    long long d = t-1;
    cout << "YES\n";
    cout << a << " " << 1LL*a*d << " " << p << "\n";
}

int main (){
    int t; cin >> t;
    while (t--){
        done();
    }
}