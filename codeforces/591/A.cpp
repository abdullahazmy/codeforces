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
    double x, ans, a, b, spd;
    cin >> x >> a >> b;
    spd = x / (a + b);
    ans = spd * a;
    cout << ans << new;
}