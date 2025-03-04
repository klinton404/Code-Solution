#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, totalSum = 0, mySum = 0, count = 0;
    cin >> n;

    vector<int> coins(n);
    for(int i=0; i<n; i++)
    {
        cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    for (int i=0; i<n; i++)
    {
        mySum += coins[i];
        count++;
        if (mySum > totalSum - mySum)
        {
            break;
        }
    }

    cout << count << '\n';
    return 0;
}
