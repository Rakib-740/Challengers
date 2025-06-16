#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 

    while (q--) {
        int item;
        cin >> item;
        bool flag = false;


        int beg = 0, end = n - 1;
        while (beg <= end) 
        {
            int mid = (beg + end) / 2;
            if (arr[mid] == item) 
            {
                flag = true;
                break;
            } 
            else if (arr[mid] > item) 
            {
                end = mid - 1;
            } else 
            {
                beg = mid + 1;
            }
        }

        /*
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == item) {
                flag = true;
                break;
            }
        }
        */

        if (flag) 
        {
            cout << "found" << '\n';
        } 
        else 
        {
            cout << "not found" << '\n';
        }
    }

    return 0;
}
