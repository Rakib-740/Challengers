#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s;
    /*
    while(cin >> s)
    {
        if(s == "\n")
        {
            break;
        }
        reverse(s.begin() , s.end());
        cout << s;
        // can't find a way to print space this way.
        
    }
    */
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> print_the_line;
    while(ss >> word)
    {
        reverse(word.begin() , word.end());
        // here's i can't print the space , but then i got the idea
        print_the_line.push_back(word);
    }

    for(int i = 0; i < print_the_line.size(); i++)
    {
        cout << print_the_line[i];
        if(i != print_the_line.size() - 1) cout << " ";
    }
    cout << endll;
    return 0;
}