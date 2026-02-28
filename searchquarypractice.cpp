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
    sort(a,a+n);
    int q;
    cin>>q;
   for(int i=0;i<q;i++)
    {
    int l,r;
    l=0;
    r=n-1;
    int flag=0;
       
        int value;
        cin>>value;
        while(l<=r)
        {
            int mid=(l+r)/2;
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
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}