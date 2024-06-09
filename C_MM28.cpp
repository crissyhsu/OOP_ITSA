#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    bool first = true;
    while(cin >> a){
        first = true;
        for(int i = 1 ; i <= a ; i++){
            if(i%35 == 0){
                if(!first) cout << ' ';
                else{
                    first = false;
                }
                cout << i ;
            }   
        }
        cout << endl;
    }
    return 0;
}