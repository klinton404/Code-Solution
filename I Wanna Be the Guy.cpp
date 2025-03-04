#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, level;
    cin >> n;
    set<int> levels;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        levels.insert(level);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        levels.insert(level);
    }

    cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
