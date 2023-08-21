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
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}
int main()
{
    // fast_IO();
    // file_IO();
    int n, z;
    cin >> n >> z;
    string x;
    cin >> x;
    while (z--)
    {

        for (int i = 0; i < n; i++)
        {
            if (x[i] == 'B' && x[i + 1] == 'G')
            {
                x[i] = 'G';
                x[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << x;
}