#include<bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n; 
    if (n>=0)cout << n << "\n";
    else {
        int r = n%10;
        int d = n/10;
        int dd = d/10;
        int ans = max(d, dd*10+r);
        cout << ans << "\n";
    }
}