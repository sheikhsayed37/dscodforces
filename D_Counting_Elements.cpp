#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;

    for(int i = 0; i < n; i++)   // jekono akt element er sateh 1 jog korle array er onno jekono
                                //  akta element er mile jabe
    { 
        for(int j = 0; j < n; j++)
        {
            if(v[i] + 1 == v[j])
            {
                count++;
                break;   // একবার পেলেই হবে
            }
        }
    }
    
     cout << count;
}
