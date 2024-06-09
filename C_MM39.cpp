#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(3);

    while(cin >> a[0] >> a[1] >>a[2]){
       sort(a.begin(),a.end());
       if(a[2]>=a[0]+a[1])   cout << "Not Triangle\n";
       else if(a[2]*a[2]<a[0]*a[0]+a[1]*a[1])   cout << "Acute Triangle\n";
       else if(a[2]*a[2]>a[0]*a[0]+a[1]*a[1]) cout << "Obtuse Triangle\n";
       else cout << "Right Triangle\n";
    }
    return 0;
}