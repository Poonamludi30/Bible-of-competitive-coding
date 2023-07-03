#include<bits/stdc++.h>
using namespace std;

int* mergeArray(int arr1[],int arr2[],int m,int n)
{
        int* res = new int[m+n];
        int i=0,j=0,k=0;

        while(i<m && j<n)
        {
            if(arr1[i]<arr2[j])
            {
                res[k++]=arr1[i++];
            }
            else
            {
                res[k++]=arr2[j++];
            }
        }
        while(i<m)
        {
            cout<<"\ni<m:   ";
         res[k++] = arr1[i++];
        }

        while(j<n)
        {
            cout<<"\nj<n:   ";
          res[k++] = arr2[j++];
        }  

        return res;
}

int main()
{
    cout<<"Enter number of elements for array 1: ";
    int m;cin>>m;

    cout<<"Enter elements for array 1 :";
    int arr1[m];

    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter number of elements for array 2: ";
    int n;cin>>n;

    cout<<"Enter elements for array 2 :";
    int arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    int* res;

    res = mergeArray(arr1,arr2,m,n);

    cout<<"Merged Array: ";

    for(int i=0;i<m+n;i++)
     cout<<res[i]<<" ";

    delete[] res;
}