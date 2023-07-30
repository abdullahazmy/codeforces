#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr1[size];
    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i]; // [1,2,3]  [2,4,4]
        cin >> arr2[i];
    }
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        for (int z = 0; z < size; z++)
        {
            if (arr1[i] == arr2[z])
                counter++;
        }
    }

    cout << counter;

    return 0;
}