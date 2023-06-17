#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll fastExpo(int a,int n,int mod)
{
    if(n==1)
     return a%mod;
    if(n==0)
     return 1;
    
    ll ans = (long long)(1)*a*a;

    for(int i=4;i<=n;i = i*i)
    {
        ans = (ans*ans)%mod;
    }

    if(n%2 == 1)
     ans = (ans*a)%mod;


    return ans;
    
}

int main()
{
    int a,n,mod;
    cout<<"Enter a: ";
    cin>>a;

    cout<<"\nEnter n: ";
    cin>>n;

    cout<<"\nEnter mod: ";
    cin>>mod;

    cout<<"The module exponent is : "<<fastExpo(a,n,mod)<<endl;
}