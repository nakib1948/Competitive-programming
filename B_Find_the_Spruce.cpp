#include<bits/stdc++.h>
using namespace std; 

#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
 
ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}


int main()
{
     
    bss;
    ll t;
   cin>>t;
    while(t--)
    {
        ll i,c=0,s=0,n,m,k=0,f=0,c1=0,c2=0,c3=0;
       cin>>n>>m;

        char a[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(a[i][j]=='*')
                {
                    k++;
                    s=0,c=0;
                    f=0;
                   for(ll l=i+1;l<n;l++)
                   {
                       s+=2;
                       c=0,c1=0,c2=0,c3=0;
                       
                               if(a[l][j]=='*')
                               {
                                   for(ll l1=j+1;l1<m;l1++)
                                   {
                                       if(a[l][l1]=='*')
                                        {c++;}
                                        else if(c==(s/2))
                                        break;
                                        else break;
                                   }
                                    for(ll l1=j+1;l1<m;l1++)
                                   {
                                       if(a[l][l1]=='*')
                                        {c2++;}
                                        
                                        else break;
                                   }
                                   for(ll l1=j-1;l1>=0;l1--)
                                   {
                                       if(a[l][l1]=='*')
                                       {c1++;}
                                       else if(c1==(s/2))
                                       break;
                                       else break;
                                   }
                                   for(ll l1=j-1;l1>=0;l1--)
                                   {
                                       if(a[l][l1]=='*')
                                       {c3++;}
                                       else break;
                                   }
                                
                               }
                        if((c+c1)==s)k++;
                        if(c2==c3)
                        {
                            ll p=(c2+c3)-s;
                            k+=(p/2);
                        }
                        else 
                        {
                            f=1;
                            break;
                        }
                       
                   }
                }
            }
        }
        cout<<k<<endl;
    }


    return 0;
}

