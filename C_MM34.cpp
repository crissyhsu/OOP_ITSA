#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        bool first = true;
        for(int i = 1 ; i <= a ;i++){
            if(a%i == 0){
                if(!first)  cout << ' ';
                else    first = false;
                cout << i ;
            }
        }
        cout << endl;
    }
    return 0;
}