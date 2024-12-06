#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second



int main() {

    // 3 17 4
    // 17 => 3, 6, 9, 12 = 30 -17 = 13;

    int cost, dollar, banana;
    cin>>cost>>dollar>>banana;
    int i = 1;
    ll totalCost = 0;
    while(i <= banana){
        // cout<<"cost=>"<<cost<<" ";
        totalCost += (i*cost);
        // cout<<"totalCost=> "<<totalCost<<endl;
        i++;
    }
// cout<<"dollar"<<dollar<<" ";

    if(totalCost <= dollar){
         cout<<0<<endl;
    }
    else{
        cout<<totalCost-dollar<<endl;
    }

    return 0;
}
