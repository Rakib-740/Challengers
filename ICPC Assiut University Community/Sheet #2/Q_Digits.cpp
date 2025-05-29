#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    
    for(int num : arr)
    {
        if(num == 0)
        {
            cout << num << '\n';
        }
        else{
            int temp, rem;
            temp = num;
            while(temp != 0)
            {
                rem = temp % 10;
                cout << rem << " ";
                temp = temp / 10;
            }
            cout << '\n';
        }
        
    }


    return 0;
}
