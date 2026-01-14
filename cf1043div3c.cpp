#include<bits/stdc++.h>
using namespace std;

void done (){
    long long n; cin >> n; 
    long long ans=0;
    int p=0;
    while (n!=0){ 
        if (pow(3,p)>=n){
            if (n!=pow(3,p))p--;
            if (n<3){
                ans += n*3;
                n/=n;
                n--;
            }
            else {
                ans += pow(3, p-1)*(p+9);
                n -= pow(3, p);
            }
            p=0;
        }
        p++;
    }
    cout << ans << '\n';
}

int main (){
    int t; cin >> t;
    while (t--){
        done();
    }
}