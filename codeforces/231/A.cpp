#include <iostream>
using namespace std;
int main()
{
    int n, counter=0, result=0;
    cin >> n;
    short int x,y,z;

    
    for (int i=0; i < n; i++)
    {
        cin >> x >> y >>z;
        counter = (x+y+z);
        if(counter>=2)  result++;
        counter =0;
    }

    cout << result;
}