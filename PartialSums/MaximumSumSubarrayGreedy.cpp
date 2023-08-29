#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {-6,5,3,4,-2,3,-3};

    int n = sizeof(arr)/sizeof(int);

    int x=0,y=0,x1=0,y1=0,sum=arr[0],max=arr[0];

    for(int i=1;i<n;i++)
    {
        sum = sum+arr[i];
        y1 = i;
        if(sum > max)
        {
            max = sum;
            x = x1;
            y= y1;
        }
        if(sum < arr[i])
        {
            sum = arr[i];
            x1=y1= i;
        }
    }

    cout<<"Max: "<<max<<" x: "<<x<<" y:"<<y<<endl;

}