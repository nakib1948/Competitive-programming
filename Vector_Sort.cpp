#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,i;
    cin>>n;
    vector<ll>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}