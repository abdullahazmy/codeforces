#include <iostream>
using namespace std;
int main()
{
    int l,b,counter=0;
    cin >> l >> b;
    if (l==b) cout << 1 ;
    else
    {
        while(l<b)
        {
            // 4 9
            // [4*3=12 && 9*2=18]   [12*3=36  &&  18*2=36]  [36*3=108 && 36*2= 72] 
            l*=3; b*=2;
            counter++;

            if (l==b) counter++;
        }

        cout << counter;
    }

    
}