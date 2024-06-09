#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int all_time = (h2-h1)*60 + m2-m1;
    int sum = 0;
     if(all_time<=120 and all_time>=30)
        sum=(all_time/30)*30;
    else if(all_time>120 and all_time<=240)
        sum=((all_time-120)/30)*40+120;
    else if(all_time>240)
        sum=((all_time-240)/30)*60+280;
    cout << sum << endl;
    return 0;
}