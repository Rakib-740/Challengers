#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n; 
    int a, b; cin >> a >> b;
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        string s = to_string(i);
    
        int temp = 0;
        for(char c : s)
        {
            int d = c-'0';
            temp = temp + d;
        }

        if (temp >= a && temp <= b){
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}