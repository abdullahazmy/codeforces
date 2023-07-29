#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> box;
    cin >> box[1];
    cin >> box[2];
    cin >> box[3];
    cin >> box[4];

    string steps;
    cin >> steps;
    int result =0;
    for (int i=0 ; i < steps.size();i++)
    {
        result+= box[steps[i]-48];
    }

    cout << result;

}
