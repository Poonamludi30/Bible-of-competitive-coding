#include<bits/stdc++.h>
using namespace std;



void buildSum(int n,int arr[],int x,int y)
{
    int sums[n];
    sums[0]=arr[0];

    for(int i=1;i<n;i++)
     sums[i]=sums[i-1]+arr[i];

    cout<<"The sum is : "<<sums[y] - sums[x] + arr[x];
}

int main()
{
    cout<<"yo!!!!!  size of Array: ";
    int n;

    cin>>n;

    cout<<"\nEnter elements: ";
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    

    cout<<"\nEnter x and y: ";

    int x,y;cin>>x>>y;

    buildSum(n,arr,x,y);

    
}