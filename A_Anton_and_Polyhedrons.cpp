#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(int &sum){
    string shape;
    cin>>shape;

    if(shape == "Tetrahedron"){
        sum += 4;
    }
    else if(shape == "Cube"){
        sum += 6;
    }
    else if (shape == "Octahedron"){
        sum += 8;
    }
    else if(shape == "Dodecahedron"){
        sum += 12;
    }
    else{
        // Icosahedron
        sum += 20;
    }



}

int main() {
    int T;
    cin >> T;
    int sum = 0;
    while(T--){
        solve(sum);
    }
        cout<<sum<<endl;
    return 0;
}
