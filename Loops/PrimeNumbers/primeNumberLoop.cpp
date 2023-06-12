#include <iostream>
using namespace std;

bool isPrime(int n)
{
    //Corner Cases 0 and 1
    if(n==1||n==0)
     return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}

int main()
{
    cout<<"Enter Number: ";
    int num;
    cin>>num;

    if(isPrime(num))
        cout<<num<<" is a Prime Number\n";
    else
        cout<<num<<" is not a Prime Number\n";
}