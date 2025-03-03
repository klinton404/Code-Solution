#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;

    int arr;
    for(int i=0; i<n; i++)
    {
        cin >> arr;
        if(arr == 1)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "HARD" <<'\n';
    }
    else
    {
        cout << "EASY" <<'\n';
    }

    return 0;
}
