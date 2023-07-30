#include <iostream>
using namespace std;
int main()
{
    string value;
    cin >> value;
    int steps = 0;
    int start = 97;
    for (int i = 0; i < value.size(); i++)
    {
        int result = abs(value[i] - start);
        if (result <= 13)
        {
            steps += result;
        }
        else
        {
            steps += (26 - result);
        }

        start = value[i];
    }
    cout << steps;

    return 0;
}