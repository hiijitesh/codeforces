#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second

int isVowel(char ch)
{
    int check = 0;
    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        check = 1;
    }
    return check;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; cin>>str;
    // 65 -> 85

    string res = "";

    // convert all those string to lower case
     transform(str.begin(),str.end(),str.begin(), ::tolower);

    for(ll i = 0; i < str.length(); i++){
            // cout<<str[i]<<endl;
        if(isVowel(str[i])){
           continue;
        }else{
             res += '.';
            res += str[i];
        }
    }
    cout<<res<<endl;

    return 0;
}
