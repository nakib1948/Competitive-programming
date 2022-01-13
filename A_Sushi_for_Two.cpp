#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        heyyoo;
    
        ll i,j,x,y,z,count=0,sum=0,ans=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {x=i;
            break;}
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==2)
           { y=i;
            break;
           }
        }
        for(ll i=x;i<n;i++)
        {
            if(a[i]==1)
            count++;
            else
            {
               // cout<<count<<endl;
                j=i;
                sum=0;
                while(j<n)
                {
                    if(a[j]==1)
                    {
                        i=j-1;
                        if(count>=sum)
                        ans=max(ans,sum*2);
                        else 
                        ans=max(ans,count*2);
                        count=0;
                        break;
                    }
                    else 
                    sum++;

                    j++;
                }
                if(j==n)
                break;
            }
            
        }
        ans=max(ans,min(sum,count)*2);
        count=0;
         for(ll i=y;i<n;i++)
        {
            if(a[i]==2)
            count++;
            else
            {
                j=i;
                sum=0;
                while(j<n)
                {
                    if(a[j]==2)
                    {
                        i=j-1;
                        if(count>=sum)
                        ans=max(ans,sum*2);
                        else 
                        ans=max(ans,count*2);
                        count=0;
                        break;
                    }
                    else 
                    sum++;

                    j++;
                }
                if(j==n)
                break;
            }
            
        }
          ans=max(ans,min(sum,count)*2);
        cout<<ans<<endl;
    


    return 0;
}

