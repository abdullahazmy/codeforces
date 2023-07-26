#include <iostream>
using namespace std;
int main()
{
    int n, h,sum=0;
    cin >> n >>h;
    int *arr = new int [n], *w = new int[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]<=h)
        {
            w[i]=1;
        }

        else 
        {
            w[i]=2;
        }

        sum+=w[i];
    }

    cout << sum;

}