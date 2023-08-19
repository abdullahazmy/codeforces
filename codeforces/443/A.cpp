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

    set <char> ans;
    string result;
    getline(cin,result) ;
    for (char i : result)
    {
        if (i=='{' || i== '}' || i==',' || i==' ') continue;
        ans.insert(i);
    }
    cout << ans.size();

}