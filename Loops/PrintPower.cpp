#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void printPower(int a, int b)
{
    if(a>=b)
     {
        cout<<"a must be smaller than b";
        return;
     }

     if(a<=1)
      {
        cout<<a;
        return;
      }

    ll ans = a;

    while(ans < b)
    {
        cout<<ans<< " ";
        ans = ans*a;
    }
}
int main()
{
    cout<<"Enter a and b(a<b): ";
    int a , b;
    cin>>a>>b;

    cout<<"\nAll powers of "<<a<<" less than "<<b<<" : ";
    printPower(a,b);
}