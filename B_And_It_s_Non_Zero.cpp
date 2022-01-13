#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
int main()
{

    ll q;
    scanf("%lld",&q);
    while(q--)
    {
        ll j,i,p=0,k=0,c=0,s=0,s1=0,s2=0,m,t;
        scanf("%lld%lld",&m,&j);

        for(i=0;;i++)
        {
            s2+=Pow(2,i);
            if(s2>=j)
            {
                p=i-1;
                break;
            }
        }
        if(Pow(2,p-1)<m)
        {
            //cout<<"debug"<<endl;
            c=Pow(2,p)-m;
            printf("%lld\n",min(c,(j-m+1)-c));
        }
        else
        {
            //cout<<p<<endl;
            s=(j-m+1)-(Pow(2,p)-m);
            for(ll i=0;i<=p;i++)
            {
                s1+=Pow(2,i);
            }
            //cout<<s1<<endl;
            k=(j-m+1)-(j-s1);
            c=(Pow(2,p)-m)+(j-s1);
           // cout<<s<<" "<<k<<endl;
            printf("%lld\n",min(s,min(k,c)));
        }
        
      
        

    }


    return 0;
}

