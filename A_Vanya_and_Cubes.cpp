#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int cnt = 1;
    ll sum = 1;
    ll total = 0;

    int num; cin>>num;

    while(total< num){
        cnt++;
        sum += cnt;
        total += sum;
        // cout<<"SUM:->"<<sum<<endl;
    }
    // cout<<"YES"<<endl;

    cout<<cnt-1<<endl;

    return 0;
}
