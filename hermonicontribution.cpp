#include <bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
int cnt[mx];

int main (){
    int lim = 1e7;
    for (int i = 1; i <= lim; i++){
        for (int j = i; j <= lim; j+=i){
            cnt[j]++;
        }
    }/// O(n ln(n))
    for (int i = 1; i <= lim; i++){
        cout << i << ": " << cnt[i] << endl;
    }
}