#include<bits/stdc++.h>
using namespace std;

bool is_pangram(int n, string s)
{
    set<char> unique_letters;
    for (char c : s)
    {
        unique_letters.insert(tolower(c));
    }
    return unique_letters.size() >= 26;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;

    cout << (is_pangram(n, s) ? "YES" : "NO") << endl;
    return 0;
}
