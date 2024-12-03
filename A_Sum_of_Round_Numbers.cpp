#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second


void solve(){
    int num;
    cin>>num;

    vector<int> arr;

    int j = 0;
    while(num>0){
        int digit = num % 10;
        if(digit){
            int ans = pow(10,j);
            ans *= digit;
            arr.push_back(ans);
        }
        num /= 10;
        ++j;
    }

    int len = arr.size();
    cout<<len<<endl;

    for(int i = 0; i < len; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main() {
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
