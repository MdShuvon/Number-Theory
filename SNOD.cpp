#include<bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int sq = sqrt(n);
    int snod=0; 
    for (int i=1; i<=sq; i++){
        int val = (n/i)-i;
        snod += val;
    }
    snod *= 2;
    snod += sq; 
    cout << snod << "\n";
}