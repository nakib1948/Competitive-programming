#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define kk ios::sync_with_stdio(false); cin.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n>>x;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            count=0,sum=0;
            if(a[i]%x==0)
            {
                cout<<"YES"<<endl;
            }
            else if(a[i]<=9)
            cout<<"NO"<<endl;
            else 
            {
                string s=to_string(a[i]);
                bool ok=false;
                for(ll j=0;j<s.size();j++)
                {
                    ll k=s[j]-'0';
                    if(k==x)
                    {
                        ok=true;
                        break;
                    }
                }
                if(ok)
                cout<<"YES"<<endl;
                else
                {
                   if(x==2)
                   {
                       if(a[i]<20)
                       cout<<"NO"<<endl;
                       else 
                       cout<<"YES"<<endl;
                   }
                   else if(x==3)
                   {
                       if(a[i]>=30)
                       cout<<"YES"<<endl;
                       else 
                       { ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=3;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                   }
                   else if(x==4)
                   {
                       if(a[i]>=40)
                       cout<<"YES"<<endl;
                       else 
                       {
                           ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=4;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                   }
                   else if(x==5)
                   {
                       if(a[i]>=50)
                       cout<<"YES"<<endl;
                       else
                        cout<<"NO"<<endl;
                   }
                   else if(x==6)
                   {
                       if(a[i]>=60)
                       cout<<"YES"<<endl;
                       else
                       {
                           ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=6;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                       
                   }
                   else if(x==7)
                   {
                       //debug;
                       if(a[i]>=70)
                       cout<<"YES"<<endl;
                       else
                       {
                            ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=7;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                       
                   }
                   else if(x==8)
                   {
                       if(a[i]>=80)
                       cout<<"YES"<<endl;
                       else 
                       {
                           ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=8;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                   }
                   else if(x==9)
                   {
                       if(a[i]>=90)
                       cout<<"YES"<<endl;
                       else 
                       {
                            ll k=a[i]%10;
                           sum=0,count=0;
                           for(ll j=1;j<10;j++)
                           {
                               sum+=9;
                               if(sum<=a[i]){
                               ll q=sum%10;
                               if(q==k)
                               count=1;
                               }
                               else break;
                           }
                           cout<<(count==1 ? "YES":"NO")<<endl;
                       }
                   }
                }
                
            }
        }
    }


    return 0;
}

