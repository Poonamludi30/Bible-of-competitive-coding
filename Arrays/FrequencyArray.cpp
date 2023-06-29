#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main()
{
 cout<<"Enter number of elements (n<=100) : ";
 int n;
 cin>>n;

 cout<<"\nEnter elements: ";

 int num=0,a;

 for(int i=0;i<n;i++)
 {
    cin>>a;
    if(arr[a]==0)
        {
            num++;
        }
    arr[a]=arr[a]+1;
 }

 cout<<"\nNumber of distinct elements entered: "<<num;
}