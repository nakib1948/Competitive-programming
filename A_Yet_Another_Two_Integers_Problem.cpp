#include<bits/stdc++.h>
using namespace std; 

#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

int main()
{
     
    bss;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x>>y;
       while(1){
        ll k=abs(y-x);
        j=k/10;
        k=k%10;
        sum+=j;
        if(k==0)
        break;
        j=k/9;
        k=k%9;
        sum+=j;
        if(k==0)
        break;
         j=k/8;
        k=k%8;
        sum+=j;
        if(k==0)
        break;
         j=k/7;
        k=k%7;
        sum+=j;
        if(k==0)
        break;
         j=k/6;
        k=k%6;
        sum+=j;
        if(k==0)
        break;
         j=k/5;
        k=k%5;
        sum+=j;
        if(k==0)
        break;
         j=k/4;
        k=k%4;
        sum+=j;
        if(k==0)
        break;
        j=k/3;
        k=k%3;
        sum+=j;
        if(k==0)
        break;
        j=k/2;
        k=k%2;
        sum+=j;
        if(k==0)
        break;
       j=k/1;
        k=k%1;
        sum+=1;
        if(k==0)
        break;
       }

       cout<<sum<<endl;
    }


    return 0;
}

