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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;

        if(k>n)
          cout<<"NO"<<endl;
        else if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }
        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++)
            {cout<<1<<" ";}cout<<endl;
        }
        else if(n%k==0)
        {
            cout<<"YES"<<endl;
            ll c=n/k;
            for(ll i=0;i<k;i++)
            {cout<<c<<" ";}cout<<endl;
        }
         else  if((n-(k-1))>0 && (n-(k-1))%2==1)
            {

                 cout<<"YES"<<endl;
                 cout<<n-(k-1)<<" ";
                 for(ll i=1;i<k;i++)
                 {cout<<1<<" ";}
                 cout<<endl;
            }
        else if((n%2)==0 && (n-((k-1)*2)>0))
        {
                cout<<"YES"<<endl;
                ll c=n-((k-1)*2);
                for(ll i=1;i<k;i++)
                {
                    cout<<2<<" ";
                }
                cout<< c <<endl;
        }
        else
        cout<<"NO"<<endl;    
     
    }


    return 0;
}

