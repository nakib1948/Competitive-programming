#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)

        {
            cin>>a[i];
            sum=sum+a[i];
            count=count^a[i];
        }
        cout<<"2"<<endl;
        sum+=count;
        cout<<count<<" "<<sum<<endl;
    }
 
 
    return 0;
}
 