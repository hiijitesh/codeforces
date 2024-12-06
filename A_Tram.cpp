#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


int main() {
    int T;
    cin >> T;
    int sum = 0;
    int ans = INT_MIN;
    while(T--){
        int a, b;
        cin>>a>>b;
        sum += (b-a);
        ans = max(ans, sum);
    }

    cout<<ans<<endl;
    return 0;
}
