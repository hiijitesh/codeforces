#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second



int main() {
    int m, n;
    cin>>m>>n;

    int i = 1;
    bool isDot = false;
    while(i <= m){
        int j = 0;
        if(i%2 != 0){
            while(j <= n){
                cout<<"#";
                j++;
            }
            isDot = true;
            i++;
        }

        if(i%2 == 0){
            while(j <= n){
                if(isDot){
                    if(j == n ){
                    cout<<"#";
                    }else{
                        cout<<".";
                    }
                }
                if(!isDot){
                    if(j == 1){
                        cout<<"#";
                    }else{
                        cout<<".";
                    }

                }
                j++;
            }
            cout<<endl;
            i++;
        }
    }

    return 0;
}
