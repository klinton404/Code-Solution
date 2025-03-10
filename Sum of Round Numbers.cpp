#include<bits/stdc++.h>
#define pb push_back
#define ll long long int
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define all(x) x.begin(), x.end()
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> round_numbers;
    int place = 1;

    while(n > 0)
    {
        int digit = (n % 10) * place;
        if (digit > 0)
        {
            round_numbers.push_back(digit);
        }
        n /= 10;
        place *= 10;
    }

    cout << round_numbers.size() << endl;
    for (int num : round_numbers)
    {
        cout << num << " ";
    }
    cout << endl;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
