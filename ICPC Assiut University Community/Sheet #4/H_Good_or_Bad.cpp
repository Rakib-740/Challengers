#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

// int main() {
//     fast;
//     int n; cin >> n;
//     cin.ignore();

//     while(n--)
//     {
//         string s;
//         getline(cin, s);

//         int t; t = s.length();
//         bool flag = false;
//         for(int i = 0; i < t - 2; ++i)
//         {
            
            
            
//             if(s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
//             {
//                 flag = true;
//                 break;
//             }
//             else if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
//             {
//                 flag = true;
//                 break;
//             }
            
//         }
//         if(flag)
//         {
//             cout << "Good" << endll;
//         }
//         else
//         {
//             cout << "Bad" << endll;
//         }
        
//     }
//     return 0;
// }



int main()
{
    fast;

    int n; cin >> n;
    cin.ignore();

    while(n--)
    {
        string s;
        getline(cin, s);

        if(s.find("010") == -1 && s.find("101") == -1)
        {
            cout << "Bad" << endll;
        }
        else
        {
            cout << "Good" << endll;
        }
    }
    return 0;
}