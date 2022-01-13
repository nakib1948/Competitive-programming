#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll c[100005];
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

      // freopen("input.txt", "r", stdin);
      // freopen("output.txt", "w", stdout);
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n],b[n];
        j=n-1;
        rep(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
            c[a[i]]=i;
        }

        sort(b,b+n);
        for(ll i=0;i<n;i++)
        {
           if(j>=0 && a[i]==b[j])
           {
             cout<<a[i]<<" ";
             j--;
             while(c[b[j]]<i)
             {
               // debug;
                 cout<<b[j]<<" ";
                j--;

             }
             cout<<endl;

           }
           else cout<<endl;
        }

    return 0;
}

