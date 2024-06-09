#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(a*a + b*b > 10000 || a > 100 || b > 100){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
    return 0;
}