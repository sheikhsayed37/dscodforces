#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i];

    }
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int j=l-1;j<=r-1;j++) // 3 no line e 1 3 mane index 0-2 porjonto jog kora 
        {                 //6+4+2=12 ..akane first line e n=6 jeta array neya hoise '
                         // or input holo 6 4 2 7 2 7. er pashe 3 holo quaery.
            sum=sum+a[j];
        }
        cout<<sum<<endl;
    }

}