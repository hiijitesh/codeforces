#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main() {
    string name;
    cin>>name;
    vector<int> arr(26,0);
    for(int i = 0; i < name.size(); i++){
        //
        arr[name[i] - 'a']++;
        //
    }

    int cnt = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            cnt++;
        }
    }

   if(cnt%2 != 0){
    cout<<"IGNORE HIM!"<<endl;
   }
    else{
    cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}
