#include <bits/stdc++.h>
using namespace std;

void printRhombusOfStars(int n)
{
    int stars = -1;
    int mid = ceil((float)n/2);
   for(int i=1;i<=n;i++)
   {
    //cout<<"ceil: "<<ceil((float)n/2)<<" i: "<<i<<endl;
    if(i<= mid)
    {
        stars= stars + 2;
        for(int j=n/2;j>=i;j--)
        {
            cout<<" ";
        }
        for(int j=stars;j>=1;j--)
        {
            cout<<"*";
        }
        for(int j=n/2;j>=i;j--)
        {
            cout<<" ";
        }
        cout<<endl;
       
    }
    else
    {
        stars= stars - 2;
        //cout<<stars<<endl;
        for(int j=mid;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=stars;j>=1;j--)
        {
            cout<<"*";
        }
        for(int j=mid;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
   }
}
int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    printRhombusOfStars(n);
}