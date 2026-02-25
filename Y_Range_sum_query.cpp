#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    
    vector<int>v(n+1);  // akta beshi nite hocce \index jeno 1  teke count korte pari
    for(int i=1;i<n+1;i++)// oder kotha onosare i=1 to n
    {
        cin>> v[i];

    }
     vector<int>prefix(n+1);
     prefix[1]=v[1];

    for(int i=2;i<n+1;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    while(q--)  
    {
        int L,r;
        cin>>L>>r;
        int sum=0;
       if(L==1)
       {
        sum=prefix[r];
       
       }
       else
       {
        sum=prefix[r]-prefix[L-1];
       }
       cout<<sum<<endl;
    }

}