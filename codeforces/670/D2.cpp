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

ll n, k;
vector<ll> ing, has;
bool accept(ll a)
{
    ll temp = k;

    for (int i = 0; i < n; i++)
    {
        ll need = (ing.at(i) * a);
        if (need > has.at(i))
        {
            temp -= (need - has.at(i));
        }

        if (temp < 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    fast
    input();

    cin >> n >> k;
    ing.resize(n);
    has.resize(n);
    for (int i = 0; i < n; i++)
        cin >> ing.at(i);
    for (int i = 0; i < n; i++)
        cin >> has.at(i);

    ll ans = 0;
    ll left = 0;
    ll right = 2e9 + 5;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (accept(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;
}
