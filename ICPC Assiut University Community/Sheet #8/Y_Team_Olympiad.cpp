#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> skill1, skill2, skill3;

    for (int i = 1; i <= n; ++i) 
    {
        int t;
        cin >> t;
        if (t == 1)
            skill1.push_back(i);
        else if (t == 2)
            skill2.push_back(i);
        else if (t == 3)
            skill3.push_back(i);
    }

    int w = min({(int)skill1.size(), (int)skill2.size(), (int)skill3.size()});
    cout << w << endll;

    for (int i = 0; i < w; ++i) 
    {
        cout << skill1[i] << " " << skill2[i] << " " << skill3[i] << endll;
    }

    return 0;
}
