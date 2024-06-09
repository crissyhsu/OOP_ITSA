#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        bool check = true;
        
        for(int i = 2 ; i < a ; i++){
            if(a%i == 0){
                check = false;
                break;
            }
        }
        if(a == 2) check = true;

        if(check)   cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}