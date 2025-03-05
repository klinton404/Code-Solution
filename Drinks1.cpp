#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double count = 0, arr;
    for(int i=0; i<n; i++)
    {
        cin>>arr;

        count += arr;
    }
    double ans = count/n;

    cout << ans <<'\n';
}
