#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]>k)
            {sum+=2;}
            else sum++;
        }
        cout<<sum<<endl;

    return 0;
}

