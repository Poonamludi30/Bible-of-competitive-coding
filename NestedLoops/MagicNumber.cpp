#include <bits/stdc++.h>
using namespace std;


int magicNumber(int n)
{
    //cout<<n<<endl;
    int sum = 0;

    while(n>0)
    {
        sum = sum + n%10;
        n= n/10;
    }

    if( sum < 10)
      return sum;
    return magicNumber(sum);
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<"Magic Number of "<<n<<" is "<<magicNumber(n);
}