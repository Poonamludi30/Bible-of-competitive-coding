#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sieve(bool arr[],int n)
{
    arr[1] = false;arr[2]=true;

    for(int i = 2;i<=n/2;i++)
    {
        if(arr[i])
        {
            for(int j=2;j*i<=n;j++)
            {
                arr[j*i]=false;
            }
        }
    }

}

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    bool arr[n+1];

    for(int i=1;i<=n;i++)
     arr[i] = true;

    sieve(arr,n);

    cout<<"Prime Numbers between 1 to "<<n<<" : ";

    for(int i=1;i<=n;i++)
        if(arr[i])
            cout<<i<<" ";
    cout<<endl;
}