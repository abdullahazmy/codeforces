#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+x);

    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}