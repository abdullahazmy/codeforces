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
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 > 0)
        {
            n -= 1;
        }

        else
        {
            n /= 10;
        }
    }

    cout << n;
}
