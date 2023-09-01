#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> boysSkills(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> boysSkills[i];
    }

    cin >> m;
    vector<int> girlsSkills(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> girlsSkills[i];
    }

    // Sort the skills of boys and girls in non-decreasing order.
    sort(boysSkills.begin(), boysSkills.end());
    sort(girlsSkills.begin(), girlsSkills.end());

    int pairs = 0;
    vector<bool> pairedGirl(m, false);

    // Iterate through each boy and try to find a suitable girl.
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!pairedGirl[j] && abs(boysSkills[i] - girlsSkills[j]) <= 1)
            {
                // If a suitable girl is found, mark her as paired and break.
                pairedGirl[j] = true;
                pairs++;
                break;
            }
        }
    }

    cout << pairs << endl;

    return 0;
}
