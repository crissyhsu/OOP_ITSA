#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    while(cin >> a){
        long long sum = 1;
        for(int i = 0 ; i < a ; i++){
            sum *= i+1;
        }
        cout << sum << endl;
    }
    return 0;
}