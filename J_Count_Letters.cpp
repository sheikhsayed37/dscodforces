#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char ch;
    cin >> ch;

    int count = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ch)
        {
            count++;
        }
    }

    cout << count;
}
