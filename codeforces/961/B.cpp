#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void file_IO()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r" , stdin);
    freopen ("Output.txt", "w", stdout);
#endif
}
const int n = 1e5 + 1;
int arr[n];
int arr2[n], cs[n];
int result = 0;
int main()
{
    file_IO();
    fast_IO();
    int a, k;
    int mx = 0;
    cin >> a >> k;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < a; i++) {
        if (arr2[i] == 1) {
            result += arr[i];
            arr[i] = 0;
        }
    }

        cs[0] = arr[0];
        for (int i = 1; i < a; i++)
        {
            cs[i] = cs[i - 1] + arr[i];
        }

        for (int i = 0, l, r; i < a - k +1; i++)
        {
            l = i;
            r = i + k - 1;
            if (l == 0)
                mx = max(mx, cs[r]);
            else
                mx = max(mx, cs[r] - cs[l - 1]);
        }
    cout << result + mx;
    }

