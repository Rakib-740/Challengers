#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

vector<int> arrays(int n)
{
    vector<int> result;

    int place = 1;
    while (n / place >= 10) {
        place *= 10;
    }

    while (n > 0)
    {
        int digit = n / place;

        if (digit != 0)
        {
            result.push_back(digit * place);
        }

        n %= place;
        place /= 10;
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 

    while(t--)
    {
        int n; cin >> n;

        if(n / 10 == 0)  
        {
            cout << "1" << endll << n << endll;
            continue;
        }
        
        vector<int> results = arrays(n);
        

        cout << results.size() << endll;

        for(int i = 0; i < results.size(); i++)
        {
            cout << results[i];
            if(i < results.size() - 1)
                cout << " ";
        }
        cout << endll;
    }
    return 0;
}
