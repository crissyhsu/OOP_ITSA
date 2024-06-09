#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(a > 100 || a <0 || b > 100 || b < 0){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
    return 0;
}