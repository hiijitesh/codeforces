#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main() {

    int n;
    cin>>n;
    int sum = 0;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
    }
        if(sum >= 1){
        cout<<"HARD"<<endl;
    }else{

    cout<<"EASY"<<endl;
    }


    return 0;
}
