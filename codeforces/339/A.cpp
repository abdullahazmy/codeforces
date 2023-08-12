#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    string str;
    // // + = 43 in ascii table
    for (int i = 0; i < input.size(); i++)
    {

        if (input[i] == '+')
        {
            continue;
        }

        else
        {
            str.push_back(input[i]);
        }
    }
    sort(str.begin(), str.end());
    int arr[100] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (i == str.length() - 1)
        {
            cout << str[i];
            break;
        }
        cout << str[i] << "+";
    }
}