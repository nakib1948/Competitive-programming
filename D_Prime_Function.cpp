#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int i,m,f=0;
    for(i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            cout<<"NO"<<endl;
            f=1;
            break;
        }
    }
    if (f==0)
        cout << "YES"<<endl;
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n==1)cout<<"NO"<<endl;
        else
        prime(n);
    }

}