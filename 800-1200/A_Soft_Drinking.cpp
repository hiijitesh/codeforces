#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main() {

    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;

    int ans = 0;
    int t1 = (k*l)/nl;
    int t2 = (c*d);
    int t3 = p/np;

    ans = min (min(t1, t2 ), t3);
    cout<<ans/n<<endl;

    return 0;
}
