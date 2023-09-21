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
    ll n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "abc")
        {
            cout << "YES" << new;
        }
        else if (s == "acb")
        {
            cout << "YES" << new;
        }
        else if (s == "bac")
        {
            cout << "YES" << new;
        }

        else if (s == "cba")
        {
            cout << "YES" << new;
        }

        else
        {
            cout << "NO" << new;
        }
    }
}