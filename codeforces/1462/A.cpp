#include <bits/stdc++.h>
using namespace std;
#define azmy ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        int arr[temp];
        for (int j = 0; j < temp; j++)
        {
            cin >> arr[j];
        }
        int start = 0, end = temp - 1;
        while (start <= end)
        {
            cout << arr[start] << " ";
            if (start != end)
            {
                cout << arr[end] << " ";
            }
            start++;
            end--;
        }
        cout << "\n";
    }
}
