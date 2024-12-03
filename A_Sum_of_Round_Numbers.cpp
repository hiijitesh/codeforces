#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";
#define ff first
#define ss second

bool isRoundNum(int num){
    // cout<<"NUM ==>"<<num<< " "<<endl;
    string currNum = to_string(num);
    int digit = currNum[0] - '0';
    // cout<<"DIGIT->>"<<digit<<endl;

    if(digit == '0'){
        return false;
    }
    if(digit <= 1 && digit >= 9){
        return false;
    }
    for(int i = 1; i < currNum.size(); ++i){
        // int currDigit = currNum[i] - '0';
        if(currNum[i] != 48)
            return false;
    }
    return true;
}
void solve(){
    int num;
    cin>>num;

    vector<int> arr(10000, 0);
    if(isRoundNum(num)){
        // cout<<1<<endl;
        // cout<<num<<endl
    }

    int deci = 1;
    int count = 0;
    while(num>0){
        int digit = num % 10;
        // cout<<"DIGIT=>"<<digit<<" ";
        if(digit != 0){
            int checkRoundNum = digit*deci;
            // cout<<endl;
            // cout<<"RoundNo:-->"<<checkRoundNum<<" ";
            // cout<<endl;
            if(isRoundNum(checkRoundNum)){

                // cout<<"OLD COUNT==>"<<count<<endl;
                count++;
                arr[digit] = checkRoundNum;
                // cout<<"NEW count==>"<<count<<endl;
                // cout<<"------------------"<<endl;
            }
        }
        // cout<<digit*deci<<" ";

        deci *= 10;
        num = num / 10;
    }
    cout<<count<<endl;
    // cout<<"count=>"<<count<<endl;

    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] != 0){
            cout<<arr[i]<<" ";

        }

    }
    cout<<endl;


}

int main() {
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
