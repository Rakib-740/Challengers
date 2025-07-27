#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;
        int count = 0, max_cnt = 0;

        vector<int> arr(a);
        
        for(int i = 0; i < a; i++)
        {
            cin >> arr[i];

            if(arr[i] == 0)
            {
                count++;
                max_cnt = max(max_cnt, count);
            }
            else
            {
                count = 0;
            }
            
        }
        cout << max_cnt << endll;
    }
    return 0;
}