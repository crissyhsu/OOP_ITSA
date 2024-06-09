#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;

    while(cin >> a){
       int sum = 0;
       bool first = true;
       for(int i = 1 ; i <= a ; i++){
            if(!first)  cout << " + ";
            else    first = false;
            cout <<  i;
            sum+=i;
       }
       cout << " = "<<sum<<endl;
    }
    return 0;
}