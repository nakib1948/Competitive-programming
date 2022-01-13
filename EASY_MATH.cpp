#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

     
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m>>x>>y;
        ll a[5];
        a[0]=x,a[1]=x+y,a[2]=x+2*y,a[3]=x+3*y,a[4]=x+4*y;
       ///suposse 11 theke 20 er modde 2 er divisor 10 ta abr 5 er divisor 2 ta
       ///taile 11 theke 20 er modde (2,5) er mot divisor 12 ta.but 20 5 er divisor abr'
       ///abr 2 er divisor.taile 20 double count hoche tai ata 1 bar count korte hobe.
       ///taile 2 r 5 er lcm nile hoi 10.ekon 11 theke 20 er modde 10 er divisor 1 ta;
       ///taile 2 r 5 er mot divisor theke tader lcm 10 er divisor bad dile double count ta chole jabe.atai hoche main
       ///logic.taile 11 theke 20 er modde 2 r 5 er mot divisor hobe (10+2-1) ta.
        for(ll i=0;i<5;i++)
        {
            sum+=m/a[i] - (n-1)/a[i];///protibar n theke m er moddhe a[i] er divisor gula bair kore sob gula jok korsi
            for(ll j=i+1;j<5;j++)
            {
                ll lc=lcm(a[i],a[j]);///jeheto lcm ta bad dile double count chole jai tai brute force ee
                                    ///shob lcm count kore raksi
                z=m/lc - (n-1)/lc;///n theke m er modde lcm er shob divisor bair korsi
                count+=z;
            }
        }
        cout<<(m-n)-(sum-count)<<endl;///finally mot sum theke mot lcm shob bad disi and (m-n)- korsi karon divisor jegula na oigula bair korte bolse

    return 0;
}

