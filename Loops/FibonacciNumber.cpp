#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a = 0,b=1;

void fibo(ll n)
{
    if(n<=1)
    {
     cout<<n;
     return;
    }

    cout<<a<<" "<<b;

    n = n-2;

    while(n>0)
    {
        b = b+a;
        a = b-a;
        cout <<" "<< b ;
        n--;
    }
}

int main()
{
    cout<<"Enter a number to find Fibonacci series: ";
    ll n;
    cin>>n;

    cout<<"\nFibonacci Series of "<<n<<" : ";
    fibo(n);    
}