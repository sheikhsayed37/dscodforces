#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int value;
    cin>>value;
    int flag=0;
    int l,r;            //binary search er maddome amra kono value ke search korbo.                                                                                                                                                 
    l=0;
    r=n-1;
    while(l<=r)
    {
    int mid =(l+r)/2;
    if(a[mid]==value)
    {
        flag=1;
        break;
    }
    else if(a[mid]>value)
    {
       r=mid-1;  
    }
    else
    {
        l=mid+1;
    }
    }
    if(flag==1)
    {
        cout<<"found"<<endl;
    }
   else{
    cout<<"not found"<<endl;
   }




}
