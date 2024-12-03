#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


int main() {
    //find the position of 1
    int x = 0;
    for(int i = 1; i <=5; i++ ){
        for(int j = 1; j <= 5; j++){
            cin>>x;
            if(x == 1){
                cout<< abs(i-3)+abs(j-3) << endl;
            }
        }
    }
    return 0;
}
