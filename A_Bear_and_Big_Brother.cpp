#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second



int main() {
    ll a, b;
    cin>>a>>b;

    int ans = 0;
    while(a<=b){
        a = 3*a;
        b = 2*b;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
