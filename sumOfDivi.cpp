#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;
int sumOfDiv[mx];

int main (){
    int lim = 10;
    for (int i = 1; i <= lim; i++){
        for (int j = i; j <= lim; j+=i){
            sumOfDiv[j] += i;
        }
    }

    for (int i = 1; i <= lim; i++){
        cout << i << ": " << sumOfDiv[i]  << endl;
    }
}