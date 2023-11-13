#include <bits/stdc++.h>
using namespace std;

#define azmy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n"
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>

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
    ll a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= c; i++)
    {
        b -= (a * i); // 17 -= (3*0)
    }

    if (b > 0)
    {
        cout << 0;
    }

    else
    {
        cout << abs(b);
    }
}
