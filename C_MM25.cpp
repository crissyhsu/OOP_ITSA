#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    while(cin >> a){
        long long ans = 0;
        for(int i = 1 ; i <= a ; i++){
            if(i%3 == 0)    ans += i;
        }
        cout << ans <<endl;
    }
    return 0;
}