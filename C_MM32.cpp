#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        int copy =a;
        int b = a/100;
        a%=100;
        int c = a/10;
        a%=10;

        if(a*a*a+b*b*b+c*c*c == copy)   cout <<"Yes\n";
        else cout << "No\n";
    }
    return 0;
}