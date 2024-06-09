#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int result[8];
    while(cin >> a){
        if(a < 0){
            a = ~a;
            for(int i = 0 ; i < 8 ; i++){
                
                if(a%2 == 0){
                    result[7-i] = 1;
                }
                else{
                    result[7-i] = 0;
                }
                a/=2;
            }
        }
        else{
            for(int i= 0 ; i < 8 ; i++){
                result[7-i] = a%2;
                a/=2;
            }
        }

        for(int i = 0 ; i < 8 ; i++){
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}