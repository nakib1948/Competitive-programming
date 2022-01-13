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
    ll i,j,x,y,z,count=1,sum=0,sum1=0,n;
    string s;
    cin>>n>>s;
    while(count!=0)
    {
        count=0;
        for(i=0; i<s.size(); i++)
        {
 
            if(s[i]=='('&&s[i+1]==')')
            {
                count++;
                s.erase(i,2);
            }
        }
    }
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            sum++;
        }
        else
            sum1++;
    }
    if((sum==1&&sum1==1)||s.size()==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
 