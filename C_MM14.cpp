#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin >> a;
    cout << a/(60*60*24) << " days\n";
    a%=(60*60*24);
    cout << a/(60*60) << " hours\n";
    a%=(60*60);
    cout << a/(60) << " minutes\n";
    a%=(60);
    cout << a << " seconds\n";
    return 0;
}