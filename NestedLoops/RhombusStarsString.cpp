#include <bits/stdc++.h>
using namespace std;
string buildString(int n, char character) {
        string str = "";
        for (int i = 0; i < n; i++) {
            str += character;
        }
        return str;
}
 
void printRhombus(int n) {
        int stars = 1;
        int spaces = n / 2;
        for (int i = 0; i < n; i++) {
            string str = buildString(spaces, ' ') +
                         buildString(stars, '*') +
                         buildString(spaces, ' ');
            cout << str << "\n";
            if (i < n / 2) {
                stars += 2;
                spaces -= 1;
            } else {
                stars -= 2;
                spaces += 1;
            }
        }
}
int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    printRhombus(n);
}