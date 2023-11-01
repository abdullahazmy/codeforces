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
    ll size;
    cin >> size;
    deque<int> n, p, z;
    for (int i = 0; i < size; i++)
    {
        ll x;
        cin >> x;
        if (x < 0)
            n.push_back(x);
        else if (x > 0)
            p.push_back(x);
        else
            z.push_back(x);
    }
    if (p.empty())
    {
        p.push_back(n.at(n.size() - 1));
        n.erase(n.begin() + n.size() - 1);

        p.push_back(n.at(n.size() - 1));
        n.erase(n.begin() + n.size() - 1);
    }

    if (n.size() % 2 == 0)
    {
        z.push_back(n.at(n.size() - 1));
        n.erase(n.begin() + n.size() - 1);
    }

    cout << n.size() << " ";
    for (auto i : n)
    {
        cout << i << " ";
    }

    cout << new;
    cout << p.size() << " ";
    for (auto i : p)
    {
        cout << i << " ";
    }

    cout << "\n"
         << z.size() << " ";
    for (auto i : z)
    {
        cout << i << " ";
    }
}