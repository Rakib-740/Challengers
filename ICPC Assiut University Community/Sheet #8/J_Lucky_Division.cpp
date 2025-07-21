// #include <bits/stdc++.h>

// using namespace std;
// #define endll '\n'

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     string s = "";
//     cin >> s;

//     bool flag = true;

//     for(char a : s)
//     {
//         if(a != '4' && a != '7')
//         {
//             flag = false;
//             break;
//         }
//     }



//     if(flag)
//     {
//         cout << "YES" << endll;
//     }
//     else
//     {
//         int num = stoi(s);
//         if(num % 4 == 0 || num % 7 == 0)
//         {
//             cout << "YES" << endll;
//         }
//         else
//         {
//             cout << "NO" << endll;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool found = false;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endll;
    return 0;
}
