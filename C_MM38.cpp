#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(3);

    while(cin >> a[0] >> a[1] >>a[2]){
       sort(a.begin(),a.end());
       if(a[2]<a[0]+a[1])   cout << "fit\n";
       else cout << "unfit\n";
    }
    return 0;
}