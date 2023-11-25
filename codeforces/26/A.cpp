#include <iostream>
#define azmy cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    bool b[40000] = {false};
    int c[40000] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i] == true)
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                c[j] += 1;
            }
        }

        if (c[i] == 2)
        {
            ans += 1;
        }
    }
    cout << ans;
}