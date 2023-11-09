#include <bits/stdc++.h>
using namespace std;
#define azmy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n"
#define ll long long
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
ll N = 240;

int main()
{
    azmy
    input();
    int n, k;
    cin >> n >> k;
    ll m = N - k, count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (m - (5 * i) >= 0)
        {
            count++;
            m = m - (5 * i);
        }

        else
            break;
    }

    cout << count;
}
