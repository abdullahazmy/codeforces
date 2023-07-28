#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    cin >> n;
    char result [n];
    for (int i=0; i < n;i++)
    {
        cin >> result[i];     
    }

    for (int i=0; i < n; i++)
    {
        if (result[i]==result[i+1]) counter++;
    }
    cout << counter;
    return 0;
}