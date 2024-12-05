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
    int x = 0;
    string str;
    while(T--){
        cin>>str;
        if(str[1] == '+'){
            ++x;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
