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

    vector<int> arr(4);

    for(int i = 0; i < str.size(); i++){
        int num = str[i] - '0';
        arr[num]++;
    }

    string res = "";
    for(int i = 0; i < arr.size(); i++){
        while(arr[i]--){
            res += to_string(i);
            res += "+";
        }
    }
    res.pop_back();
    cout<<res<<endl;
}
