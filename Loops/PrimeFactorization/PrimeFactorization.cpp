#include <bits/stdc++.h>
using namespace std;


int f[100], expo[100], len;

void primeFact(int n)
{
  if(n<1)
   cout<<"Please Enter Number > 0"<<endl;
  else if(n==1)
    {
        f[0]=2;expo[0]=0;
    }
else{
    int d = 2;
    while(1LL*d*d <=n && n > 1)
    {
        int k = 0;

        while(n % d == 0)
        {
            k++;
            n=n/d;
        }

        if(k>0)
        {
            f[len] = d;
            expo[len++]= k;
        }
        d++;
    }

    if(n > 1)
    {
        f[len] = n;
        expo[len++]= 1;
    }

    for(int i=0;i<len;i++)
    {
        cout<<f[i]<<"^"<<expo[i];
        if(i!=len-1)
         cout<<" * ";
    }
    cout<<endl;
}
}

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    primeFact(n);
    return 0;
}