#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    int arr[n];
    int count_even = 0, count_odd = 0, count_neg = 0, count_positive = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }

        if(arr[i] > 0)
        {
            count_positive++;
        }
        else if(arr[i] < 0)
        {
            count_neg++;
        }

    }
    cout << "Even: " << count_even << '\n' << "Odd: "<< count_odd << '\n' << "Positive: "<< count_positive << '\n' << "Negative: " << count_neg << '\n';
    return 0;
}
