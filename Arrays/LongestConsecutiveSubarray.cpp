#include <bits/stdc++.h>
using namespace std;

int farr[100];

void reset_farr()
{
    for(int i =0;i<100;i++)
      farr[i]=0;
}

void LCS(int n, int arr[])
{
    int left=0,right=0;
    int l=left,r=right,len=0;


    for(;left<n;left++)
    {
        reset_farr();
        int l1=0;
        int min=arr[left],max=arr[left];
        for(right=left;right<n;right++)
        {
            if(farr[arr[right]]!=0)
              break;

            farr[arr[right]] = 1;
            l1++;
            if(min>arr[right])
             min= arr[right];
            if(max<arr[right])
             max= arr[right];
        }

        if(max-min+1==l1)
        {
            if(l1>len)
            {
                len = l1;
                l=left;
                r= right-1;
            }
        }

    }

   
    for(int i=l;i<=r;i++)
      cout<<arr[i];
}
int main()
{
    cout<<"Enter number of elements: ";
    int n;cin>>n;

    cout<<"Enter elements: ";

    int arr[n];

    for(int i=0;i<n;i++)
     cin>>arr[i];

    cout<<"Longest Consecutive Subarray :";
    LCS(n,arr);
}