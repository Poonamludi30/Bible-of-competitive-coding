#include<bits/stdc++.h>
using namespace std;

void maxVal(int arr[],int n)
{
    int max[2];max[0]=arr[0];max[1]=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max[0])
        {
            max[0]=arr[i];max[1]=1;
        }
        else if(arr[i]==max[0])
        {
            max[1]++;
        }
    }

    cout<<"Max value: "<<max[0]<<" Frequency: "<<max[1]<<endl;
}
int main()
{
    cout<<"Enter number of elements: ";
    int n;cin>>n;

    cout<<"Enter elements :";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    maxVal(arr,n);
}