#include <iostream>
using namespace std;
int main()
{
    int size, pol = 0, isu = 0;
    cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            if (pol > 0)
                pol--;
            else
            {
                isu++;
            }
        }

        else
        {
            pol+=num;
        }
    }

    cout << isu;
}