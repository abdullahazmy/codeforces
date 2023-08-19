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
    string ch;
    cin >> ch;
    set<char> st;
    for (int i=0; i < n; i++)
    {
        st.insert(tolower(ch[i]));
    }

    if (st.size()<26)
    {cout << "No"; return 0;}

    cout << "Yes";

}