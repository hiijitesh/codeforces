#include<iostream>
using namespace std;

int main()
{
    long long n;

    cin>>n;
    string ans;

    while(n>0)
    {
        int digit = n % 10;
        if(digit >= 5)
        {
            digit = 9 - digit;
        }
        if(n < 10 && digit == 0)
        {
            n = n / 10;
            ans = "9" + ans;
            continue;
        }
        ans = to_string(digit) + ans;
        n = n / 10;
    }

    cout<<ans<<endl;
    return 0;
}