#include<bits/stdc++.h>
using namespace std;

int main(){
    double up,down,high;
    while(cin >> up >> down >> high){
        double ans;
        ans = (up+down)*high/2.0;
        cout << "Trapezoid area:" << fixed << setprecision(1) << ans << endl;
    }
    
    return 0;
}