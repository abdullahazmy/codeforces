#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define new "\n"
#define ll long long

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}
class Rectangle
{
private:
};
int main()
{
    fast
    input();
    string s, t;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
        {
            t += '.';
            t += s[i];
        }
    }

    cout << t;
}
