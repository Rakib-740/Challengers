#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    
    int original[3] = {A, B, C};
   
    int arr[3] = {A, B, C};
    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;;
    }
    cout << endl;
    
    
    for (int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }
     

    return 0;
}
