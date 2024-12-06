#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main() {
    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    int d1 = abs(x1-x2)+abs(x1-x3);
    int d2 = abs(x2-x1)+abs(x2-x3);
    int d3 = abs(x3-x1)+abs(x3-x2);

    int ans = min(min(d1, d2), d3);
    cout<<ans<<endl;
    return 0;
}
