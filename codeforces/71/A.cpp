#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void file_IO()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r" , stdin);
    freopen ("Output.txt", "w", stdout);
#endif
}
int main()
{
    fast_IO();
    file_IO();

    int n;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size()>10)
        {
            cout << s[0] << s.size() -2 << s[s.size()-1]<< "\n";
        }

        else cout << s<< "\n";
    }


}