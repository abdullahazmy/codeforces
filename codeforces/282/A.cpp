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
    ll size, counter = 0;
    cin >> size;
    string s;
    for (int i = 0; i < size; i++)
    {
        cin >> s;
        if (s == "++X")
            counter++;
        else if (s == "X++")
            counter++;
        else
            counter--;
    }
    cout << counter;
}
