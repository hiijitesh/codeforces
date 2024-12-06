#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


int main() {
    int num;
    cin>>num;

    int t;
    cin>>t;
    while(t--){

        if(num%10 == 0){
            num /= 10;
        }
        else if(num%10 != 0){
            num = num - 1;
        }
    }
    cout<<num<<endl;
    return 0;
}
