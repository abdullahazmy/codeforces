#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n";
#define ll long long
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
string enter;
int main()
{
    fast
    input();
    int m, l, r, cnt = 0;

    int dp[100005];
    string s;

    cin >> s >> m;

    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
            cnt++;

        dp[i] = cnt;
    }

    while (m--)
    {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << new;
    }
}
