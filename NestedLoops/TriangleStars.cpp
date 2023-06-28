#include <iostream>
using namespace std;

void printTriangleOfStars(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    printTriangleOfStars(n);
}