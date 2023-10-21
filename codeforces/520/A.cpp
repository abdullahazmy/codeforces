#include <bits/stdc++.h>
using namespace std;
#define azmy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n";
#define ll long long
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
int main()
{
    azmy
    input();
    ll size;
    cin >> size;
    string s;
    cin >> s;
    if (s.size() < 26)
    {
        cout << "NO" << new;
        return 0;
    }
    set<char> ss;
    for (int i = 0; i < s.size(); i++)
    {
        ss.insert(toupper(s[i]));
    }

    if (ss.size() >= 26)
    {
        cout << "YES" << new;
    }

    else
    {
        cout << "NO" << new;
    }
}
