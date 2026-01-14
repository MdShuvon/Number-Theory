#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
vector<int> d[mx];

int main (){
    int lim = 55; 

    for (int i = 1; i <= lim; i++){
        for (int j = i; j <= lim; j+=i){
            d[j].push_back(i);
        }
    }

    for (int i = 1; i <= lim; i++){
        cout << i << ": ";
        for(auto u: d[i]){
            cout << u << " "; 
        }
        cout << endl;
    }
}