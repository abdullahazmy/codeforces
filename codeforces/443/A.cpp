#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int c = 0;
    getline(cin, str);
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '{' && str[i] != ',' && str[i] != ' ' && str[i] != '}')
        {
            if (str[i] != str[i + 1]) //{a, a, b, b}

                c++;
        }
    }
    cout << c;
}
