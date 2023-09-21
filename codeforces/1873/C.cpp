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
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        sum += 1;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        sum += 2;
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        sum += 3;
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        sum += 4;
                    else if (i == 4 || i == 5 || j == 4 || j == 5)
                        sum += 5;
                }
            }
        }

        cout << sum << new;
    }
}