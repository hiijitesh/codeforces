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

    int n; cin>>n;
    string str; cin>>str;

    // if(n==1) cout<<str<<endl;

    int nxtIdx = 1;
    int currIdx = 2;
    string res;
    res += str[0];
    for(int i = 2; i < str.size(); i+=currIdx){
        res += str[nxtIdx];
        nxtIdx += currIdx;
        currIdx += 1;
    }
    cout<<res;
    return 0;
}
