#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, days, month, temp;
    int years;
    
    cin >>a;

   
    years = a/365;
    temp = a % 365;

    if(temp >= 0)
    {
        month = temp / 30;
        temp = temp % 30;
    }
    
    
    days = temp;
    

    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}