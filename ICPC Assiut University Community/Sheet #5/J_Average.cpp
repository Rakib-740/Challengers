#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void average(vector<double> & arr, int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << fixed << setprecision(7) << sum/n << endll;
}

int main() {
    fast;
    int n; cin >> n;
    vector<double> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    average(arr, n);
    return 0;
}