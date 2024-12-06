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

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }

    int cnt = 1, ans = 1;
    for(int i = 1; i < n; ++i){
        if(arr[i] > arr[i-1]){
            cnt++;
            ans = max(ans, cnt);
        }
        else{
            cnt = 1;
        }
    }

    cout<<ans<<endl;

    return 0;
}
