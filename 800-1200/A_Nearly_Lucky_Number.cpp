#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


int main() {
     ll num;
    cin>>num;

    int count = 0;
    while(num > 0){
        int digit = num % 10;
        if(digit == 4 || digit == 7){
            count++;
        }
        num = num / 10;
    }
    if(count == 4 || count == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
