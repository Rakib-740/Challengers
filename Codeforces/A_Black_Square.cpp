#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    

    string s; cin >> s;

    int count = 0;

    for(int i = 0; i < s.size(); i++)
    {
        int j =  s[i] - '0';
        count += arr[j - 1];
    }
    cout << count << endll;
    return 0;
}