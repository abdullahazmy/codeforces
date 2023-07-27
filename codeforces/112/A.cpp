#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;
    string lowx, lowy;
    short int counterx = 0, countery = 0;

    for (int i = 0; i < x.size(); i++)
    {
        lowx += tolower(x[i]);
        lowy += tolower(y[i]);

        if (lowx > lowy)
        {
            counterx++;
        }

        else if (lowy > lowx)
            countery++;
    }

    if (counterx > countery)
        cout << 1;
    else if (countery > counterx)
        cout << -1;
    else
        cout << 0;
}