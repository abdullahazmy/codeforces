#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    cin >> m;
    vector<int> y(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int pairs = 0;
    int start = 0;
    int end = 0;

    while (start < n && end < m)
    {
        if (abs(x[start] - y[end]) <= 1)
        {
            start++;
            end++;
            pairs++;
        }
        else if (x[start] < y[end])
        {
            start++;
        }
        else
        {
            end++;
        }
    }

    cout << pairs << endl;

    return 0;
}