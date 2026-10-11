#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary,decimal=0,i=0,remainder;
    cout<<"Enter a binary number: ";
    cin>>binary;
    while(binary!=0)
    {
        remainder=binary%10;
        decimal+=remainder*pow(2, i);
         binary/=10;
        i++;
    }
    cout<<"Decimal number = "<<decimal;
    return 0;
}
