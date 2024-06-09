#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,t;
    while(cin >> a){
        a *=100;
        t=a/(100-30*2.54);
        cout << ceil(t) << endl;
    }
    
    return 0;
}