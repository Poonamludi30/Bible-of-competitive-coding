#include<bits/stdc++.h>
using namespace std;


void PH(int n)
{
  int farr[n+1];

  for(int i=0;i<=n;i++)
    farr[i]=0;

  int rem = 0;

  for(int i=1;i<=n;i++)
  {
     rem = (rem*10+1)%n;

     if(rem == 0)
     {
        for(int j=1;j<=i;j++)
          cout<<"1";
        return;
     }
     
     if(farr[rem]!=0)
     {
        for(int j=i;j>farr[rem];j--)
          cout<<"1";
        for(int j=farr[rem];j>0;j--)
          cout<<"0";
        return;
     }

     farr[rem] = i;
  }
}

int main()
{
    cout<<"Enter a number: ";
    int n;cin>>n;

    cout<<"The number divisible by "<<n<<" : ";
    PH(n);
}