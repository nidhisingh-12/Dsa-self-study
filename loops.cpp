#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number > 0) // number is positive
    {
        cout << "number is positive" << endl;
    }
    else
    { // otherwise it is negative
        cout << "number is negative";
    }
     /*----------------------------------*/
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "b is greater than a";
    }

     /*------------------------------------------------------*/
    int m;
    cout << "enter the value of m:" << endl;
    cin >> m;
    if (m > 0)
    {
        cout << "m is positive number" << endl;
    }
    else if (m < 0)
    {
        cout << "m is negative number" << endl;
    }
    else
    {
        cout << "m is zero";
    }

    /*---------------------------*/
    // print natural number
    int x;
    cin>>x;
    int i=1;
    while(i<=x){
        cout<<i<<" ";
        i=i+1;
    }


    /*--------------*/
    // print sum of natural number
    int t;
    cin>>t;

    int i=1;
    int sum=0;
    while(i<=t)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is:"<<sum<<endl;
    
    
    return 0;
}