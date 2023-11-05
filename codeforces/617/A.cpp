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
    int n, ans = 0;
    int a[] = {5, 4, 3, 2, 1};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        ans += n / a[i];
        n = n % a[i];
    }
    cout << ans << endl;
}
