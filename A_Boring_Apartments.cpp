#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second

void solve(){

    int x;
    cin>>x;

    int n = to_string(x).size();
    ll sum = (n*(n+1))/2;
    // cout<<"SUM: "<<sum<<" "<<"SIZE: "<<n<<" ";

    int currNum = x % 10;
    // cout<<"currNum: "<<currNum<<endl;

   int ans = (currNum - 1) *10 + sum;
    cout<<ans<<endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
