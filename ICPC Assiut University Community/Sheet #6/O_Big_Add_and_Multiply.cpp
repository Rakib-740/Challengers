#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main()
{
    fast;
    string s;
    cin >> s;

    string n = "9999";
    string adding_result = "", multi_result = "";
    int cary_add = 0;

    int i = s.size() - 1;
    int j = n.size() - 1;

    while (i >= 0 || j >= 0 || cary_add)
    {
        int digit1 = (i >= 0) ? s[i] - '0' : 0;
        int digit2 = (j >= 0) ? n[j] - '0' : 0;
        int sum = digit1 + digit2 + cary_add;
        adding_result += (sum % 10 + '0');
        cary_add = sum / 10;
        i--;
        j--;
    }

    reverse(adding_result.begin(), adding_result.end());

    vector<int> res(s.size() + n.size(), 0);

    reverse(s.begin(), s.end());
    reverse(n.begin(), n.end());

    for (int i = 0; i < s.size(); i++)
    {
        int digit1 = s[i] - '0';
        for (int j = 0; j < n.size(); j++)
        {
            int digit2 = n[j] - '0';
            res[i + j] += digit1 * digit2;
            if (res[i + j] >= 10)
            {
                res[i + j + 1] += res[i + j] / 10;
                res[i + j] %= 10;
            }
        }
    }

    bool leading_zero = true;
    for (int i = res.size() - 1; i >= 0; i--)
    {
        if (res[i] == 0 && leading_zero) continue;
        leading_zero = false;
        multi_result += (res[i] + '0');
    }

    if (multi_result == "")
    {
        multi_result = "0";
    }

    cout << adding_result << endll;
    cout << multi_result << endll;

    return 0;
}