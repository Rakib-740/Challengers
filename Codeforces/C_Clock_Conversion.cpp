#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
     
    while (t--) 
    {
        string s; 
        cin >> s;

        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        int minute = (s[3] - '0') * 10 + (s[4] - '0');

        string period = (hour >= 12 ? "PM" : "AM");

       
        if (hour == 0) hour = 12;        
        else if (hour > 12) hour -= 12;

        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << " "
             << period << endll;
    }
    return 0;
}
