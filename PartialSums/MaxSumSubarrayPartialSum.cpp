#include<bits/stdc++.h>
using namespace std;



void maxSumArray(int n,int arr[])
{
    int sums[n];
    sums[0]=arr[0];

    int minS=0, ans = arr[0];

    for(int i=1;i<n;i++)
     sums[i]=sums[i-1]+arr[i];

    for(int i=0;i<n;i++)
    {
        if(arr[i]-minS > ans)
            {ans = arr[i] - minS;
          }
        if(arr[i] < minS)
           { minS = arr[i];
          
           }
    }

    cout<<"Max Sum Subarray: "<<ans;
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

    maxSumArray(n,arr);

    
}