#include<bits/stdc++.h>
#include "debugging.h"

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string tab;
    cin>>tab;


    bool canPlay = false;
    int n = 5;
    while(n--){
        string card;
        cin>>card;
        // cout<<"Card: "<<card<<endl;
        if(card[0] == tab[0] || card[1] == tab[0]){
        canPlay = true;
        break;
    }
    else if(card[0] == tab[1] || card[1] == tab[1]){
        canPlay = true;
        break;
    }else{
        canPlay = false;
    }
    }


    if(canPlay){
        cout<<"YES"<<endl;
         }
    else {
        cout<<"NO"<<endl;
        }
    return 0;
}
