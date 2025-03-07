#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, event, police = 0, untreated = 0;
    cin >> n;

    while (n--)
    {
        cin >> event;
        if (event == -1)
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                untreated++;
            }
        }
        else
        {
            police += event;
        }
    }
    cout << untreated << endl;
    return 0;
}
