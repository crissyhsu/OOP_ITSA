#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    while(cin >> a >> b){
        long long ans = 0;
        if(b < a){
            long long temp = a;
            a = b;
            b = temp;
        }
        for(int i = a ; i <= b ; i++){
            ans += i;
        }
        cout << ans <<endl;
    }
    return 0;
}