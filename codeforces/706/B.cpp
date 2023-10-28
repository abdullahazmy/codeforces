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
int main()
{
    fast
    input();
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int q, m;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> m;
        int l = 0, r = n - 1, count = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= m)
            {
                count = mid + 1;
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }

        cout << count << new;
    }
}