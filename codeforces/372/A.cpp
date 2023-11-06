#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n"
#define ll long long
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
ll n;

int main()
{
    fast
    input();
    cin >> n;
    vector<ll> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k.at(i);
    }
    sort(k.begin(), k.end());
    ll l = 0, r = n / 2, counter = n;
    while (l < n / 2 && r < n)
    {
        if (k[r] >= k[l] * 2)
        {
            counter--;
            r++, l++;
        }

        else
        {
            r++;
        }
    }
    cout << counter;
}
