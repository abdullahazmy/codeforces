#include <iostream>
using namespace std;
int main()
{
    int n, counterA = 0, counterD = 0;
    cin >> n;
    char *s = new char[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 'A')
            counterA++;
        else
            counterD++;
    }

    if (counterA > counterD)
    {
        cout << "Anton";
    }

    else if (counterD > counterA)
        cout << "Danik";

    else
        cout << "Friendship";
}