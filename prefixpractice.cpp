#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }

    vector<int>prefix(n);
    prefix[0]=v[0];

    for(int i=1;i<n;i++)   // index 1 teke start korte hobe karon prefix[0] already v[0] er value niye nise
    {
        prefix[i]=prefix[i-1]+v[i];   
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }



}