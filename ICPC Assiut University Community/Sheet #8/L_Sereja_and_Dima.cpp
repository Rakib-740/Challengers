#include <bits/stdc++.h>

using namespace std;
#define endll '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int sereja = 0, dima = 0;
    bool turn = true;

    while (!arr.empty()) 
    {
        int chosen;
        if (arr.front() > arr.back()) 
        {
            chosen = arr.front();
            arr.pop_front();
        } 
        else 
        {
            chosen = arr.back();
            arr.pop_back();
        }

        if (turn)
        {
            sereja += chosen;
        }
        else
        {
            dima += chosen;
        }
        turn = !turn;
    }

    cout << sereja << " " << dima << endll;
    return 0;
}
