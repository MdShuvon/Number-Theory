#include <bits/stdc++.h>
using namespace std;

void done (){
    int n; cin >> n; 
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool ok=true;
    for (int i=1; i<n; i++){
        if (a[i]%a[0]!=0){
            ok=false;
        }
    }
    if (ok)cout << a[0] << endl;
    else cout << -1 << endl;
}
int main (){
    done();
}