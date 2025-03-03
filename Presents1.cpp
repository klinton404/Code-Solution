#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n], givers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        givers[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << givers[i] << " ";
    }
    return 0;
}
