#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


int main() {
    string str;
    cin>>str;

    if(islower(str[0])){
        str[0] = toupper(str[0]);
    }
    cout<<str<<endl;
    return 0;
}
