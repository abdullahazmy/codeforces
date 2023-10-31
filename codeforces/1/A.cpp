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
    double n, m, a; // n, m are the size of theatre square (n*m)
    // a is the size of flagstone square (a*a)
    cin >> n >> m >> a;
    // print the least number of flagstones needed to pave the Square
    ll ans = ceil(n / a) * ceil(m / a);
    cout << ans;
}