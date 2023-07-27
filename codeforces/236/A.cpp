#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string name;
    cin >> name;
    sort(name.begin(), name.end());
    int counter = 0;
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] != name[i + 1])
        {
            counter++;
        }
    }

    if (counter % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}