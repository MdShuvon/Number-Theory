#include <bits/stdc++.h>
using namespace std;

void done (){
    int n; cin >> n;
    int cnt=0;
    int tmp=n;
    set<int> ans;
    for (int i=2; i<=sqrt(n); i++){
        if (tmp%i==0){
            ans.insert(i);
            tmp/=i;
            cnt++;
        }
        if (cnt==2){
            ans.insert(tmp);
            break;
        }
    }
    int sz= ans.size();
    if (sz==3){
        cout << "YES\n";
        for (auto u: ans){
            cout << u << " ";
        }
        cout << "\n";
    }
    else {
        cout << "NO\n";
    }
}

int main (){
    int t; cin >> t; 
    while (t--){
        done ();
    }
}