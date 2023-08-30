#include <bits/stdc++.h>
using namespace std;
#define azmy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
int main()
{
    azmy input();
    int n;
    cin >> n;
    string arr[n];
    map<string, string> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[arr[i]] == "")
        {
            cout << arr[i] << "\n";
        }

        mp[arr[i]] = arr[i];
    }
}
