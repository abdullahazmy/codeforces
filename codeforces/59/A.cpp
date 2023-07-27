#include <iostream>
using namespace std;
int main()
{
    string s, resultl, resultu;
    cin >> s;
    int counterlow = 0, counterupp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            counterlow++;
        else
            counterupp++;
        resultl += tolower(s[i]);
        resultu += towupper(s[i]);
    }

    if (counterlow > counterupp)
        cout << resultl;
    else if (counterupp > counterlow)
        cout << resultu;
    else
        cout << resultl;
    return 0;
}