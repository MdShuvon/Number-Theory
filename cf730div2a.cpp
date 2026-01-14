#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        if (a == b){
            cout << "0 0\n";
            continue;
        }
        long long c = abs (a-b);
        cout << c << " " << min(a%c, c - a%c ) << "\n";
    }
}