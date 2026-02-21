#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};// akta array declare korsi dore nisi akne  A-Z porzonto ase

    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++; 
        //'a' - 'a' = 0
       //'b' - 'a' = 1
        //'c' - 'a' = 2
      //akane frequency namer array te string word gola bosai setake
        // index e proninoto korsi like  | s[i] | s[i] - 'a' | কি হবে    |

      // a    | 0          | freq[0]++ |
      //a     | 0          | freq[0]++ |
      //a     | 0          | freq[0]++ |
     //b    | 1          | freq[1]++ |
    }
      for(int i = 0; i < 26; i++)
     {
         if(freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
        
     }
}
