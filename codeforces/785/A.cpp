#include <bits/stdc++.h>
using namespace std;
#define azmy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main()
{
    azmy
        map<string, int>
            mp = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    // mp.insert({"Tetrahedron", 4});
    // mp.insert({"Cube", 6});
    // mp.insert({"Octahedron", 8});
    // mp.insert({"Dodecahedron", 12});
    // mp.insert({"Icosahedron", 20});
    int n;
    cin >> n;
    string ch[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
        sum += mp[ch[i]];
    }
    cout << sum;
}