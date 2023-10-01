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
    int n;
    cin >> n;
    int index = 0, num[n + 1];
    int e = 0, o = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        if (num[i] % 2 == 0)
        {
            e++;
        }

        else
        {
            o++;
        }

        // if (e > o)
        // {
        //     if (num[i] % 2 != 0)
        //     {
        //         index = i;
        //         break;
        //     }
        // }

        // else if (o > e)
        // {
        //     if (num[i] % 2 == 0)
        //     {
        //         index = i;
        //         break;
        //     }
        // }
    }

    for (int i = 1; i <= n; i++)
    {
        if (e > o)
        {
            if (num[i] % 2 != 0)
            {
                index = i;
                break;
            }
        }

        else if (o > e)
        {
            if (num[i] % 2 == 0)
            {
                index = i;
                break;
            }
        }
    }
    cout << index;
}
