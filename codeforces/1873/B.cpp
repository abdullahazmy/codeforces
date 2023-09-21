#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fast();
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        int arr[s];
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + s);
        arr[0] += 1;
        int r = 1;
        for (int i = 0; i < s; i++)
        {
            r *= arr[i];
        }
        cout << r << '\n';
    }
}
