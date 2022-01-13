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
        ll i,j,x,y,z,count=0,count1=0,sum=1,sum1=1,n;
        cin>>n;
        ll a[n];
        vector<ll>v,v1;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                v.pb(a[i]);
            }
            else if(a[i]<0)
            {
                v1.pb(a[i]);
            }
        }
        
        sort(v.begin(),v.end(),greater<ll>());
        sort(v1.begin(),v1.end());
        if(n==5)
        {
            cout<<(a[0]*a[1]*a[2]*a[3]*a[4])<<endl;
        }
        else if(v1.size()==n||v.size()==n)
        {
            rep(i,n)
            {
                sum*=a[i];
            }
            cout<<sum<<endl;
        }
 
       else if((v.size()+v1.size())<5)
        {
            cout<<"0"<<endl;
        }

       else if(v.size()>=5&&v1.size()>=4)
        {
            ll k=(v1[0]*v1[1]*v[0]*v[1]*v[2]);
            ll k1=(v1[0]*v1[1]*v1[2]*v1[3]*v[0]);
            ll k3=(v[0]*v[1]*v[2]*v[3]*v[4]);
            cout<<max(k,max(k1,k3))<<endl;
        }

       else if(v.size()>=5&&(v1.size()==2||v1.size()==3)) 
       {
            ll k=(v1[0]*v1[1]*v[0]*v[1]*v[2]);
            ll k1=(v[0]*v[1]*v[2]*v[3]*v[4]);
            cout<<max(k,k1)<<endl;
       }

       else if((v.size()==4||v.size()==3)&&v1.size()==4)
       {
           ll k=v1[0]*v1[1]*v1[2]*v1[3]*v[0];
           ll k1=v1[0]*v1[1]*v[0]*v[1]*v[2];
           cout<<max(k,k1)<<endl;
       }

       else if(v.size()==4&&(v1.size()==3||v1.size()==2))
       {
           cout<<(v[0]*v[1]*v[2]*v1[0]*v1[1])<<endl;
       }

       else if(v.size()==4&&(v1.size()==1))
       {
           cout<<(v1[0]*v[0]*v[1]*v[2]*v[3])<<endl;
       }

       else if(v.size()==3&&v1.size()==2)
       {
           cout<<(v[0]*v[1]*v[2]*v1[0]*v1[1])<<endl;
       }
        
        else if(v.size()==1&&(v1.size()==4||v1.size()==5||v1.size()==6||v1.size()==7||v1.size()==8))
        {
            cout<<(v[0]*v1[0]*v1[1]*v1[2]*v1[3])<<endl;
        }
        else if(v.size()==2&&v1.size()>=4)
        {
            ll k=(v[0]*v1[0]*v1[1]*v1[2]*v1[3]);
            cout<<k<<endl;
        }
        else if(v.size()==3&&v1.size()==3)
        {
            cout<<(v[0]*v[1]*v[2]*v1[0]*v1[1])<<endl;
        }
        else if(v.size()==3&&v1.size()>=5)
        {
            ll k=(v[0]*v1[0]*v1[1]*v1[2]*v1[3]);
            ll k1=(v[0]*v[1]*v[2]*v1[0]*v1[1]);
            cout<<max(k,k1)<<endl;
        }
        else if(v.size()==4&&v1.size()>=4)
        {
            ll k1=(v[0]*v[1]*v[2]*v1[0]*v1[1]);
            ll k2=(v[0]*v1[0]*v1[1]*v1[2]*v1[3]);
            cout<<max(k1,k2)<<endl;
        }
        else if(v1.size()==0&&v.size()>=5)
        {
            cout<<v[0]*v[1]*v[2]*v[3]*v[4]<<endl;
        }
        else if(v1.size()>=5&&v.size()==0)
        {
            cout<<v1[0]*v1[1]*v1[2]*v1[3]*v1[4]<<endl;
        }
        else
       {
           cout<<"0"<<endl;
       }
       

    }


    return 0;
}

