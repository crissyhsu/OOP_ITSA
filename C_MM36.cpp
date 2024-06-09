#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        if(a>= 3 && a <= 5) cout << "Spring\n";
        if(a>= 6 && a <= 8) cout << "Summer\n";
        if(a>= 9 && a <= 11) cout << "Autumn\n";
        if(a>= 12 || a <= 2) cout << "Winter\n";
    }
    return 0;
}