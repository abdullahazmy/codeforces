#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool rev (string s, string t)
{
   reverse(s.begin(),s.end());
   return s ==t;

}

int main ()
{
    string s,t;
    cin >> s >> t;
    if (rev(s,t)) cout << "YES" ;
    else cout << "NO";
}