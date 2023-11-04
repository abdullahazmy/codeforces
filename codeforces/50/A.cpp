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
class Rectangle
{
private:
};
int main()
{
    fast
    input();
    ll m, n;
    cin >> m >> n;
    cout << (m * n) / 2;
}
