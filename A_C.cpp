#include<bits/stdc++.h>


using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second

void solve(){
    int a, b, n;
    cin>>a>>b>>n;

    int cnt = 0;
    // cout<<a<<b<<endl;
    while(a <= n && b <= n){
        if(a<=b){
            a += b;
        }
        else{
            b += a;
        }
        cnt++;
    }
    cout<<cnt<<endl;
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
