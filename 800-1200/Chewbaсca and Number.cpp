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

    for(auto& digit:str){
        if(digit > '4'){
            digit = '9' - digit + '0';
        }
    }

    if(str.front() == '0'){
        str.front() = '9';
    }

    cout<<str<<endl;
    return 0;
}
