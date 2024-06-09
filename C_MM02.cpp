#include<bits/stdc++.h>
using namespace std;

int main(){
    double down,high;
    while(cin >> down >> high){
        double ans;
        ans = (down)*high/2.0;
        cout <<fixed << setprecision(1) << ans << endl;
    }
    
    return 0;
}