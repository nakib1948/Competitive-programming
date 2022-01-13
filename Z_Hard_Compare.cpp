#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double k=b*log(a);
    double j=d*log(c);
    if(k>j)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}

