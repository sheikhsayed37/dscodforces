#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    
    vector<long long int>v(n+1);    // akta beshi nite hocce \index jeno 1  teke count korte pari
    for(int i=1;i<n+1;i++)     // oder kotha onosare i=1 to n
    {
        cin>> v[i];
    }
     vector<long long int>prefix(n+1);
     prefix[1]=v[1];

    for(int i=2;i<n+1;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    while(q--)  
    {
        int L,r;
        cin>>L>>r;
         long long int sum=0;
       if(L==1)   // jodi L 1 hoy tahole prefix[r] e r porjonto sum ache mane index 1 ortat 6 change hbe na
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