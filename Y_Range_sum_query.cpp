#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
   vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>> v[i];

    }
 
   while(q--)  
    {
        int L,r;
        cin>>L>>r;
        int sum=0;
        for(int i=L;i<=r;i++) 
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;
    }

}