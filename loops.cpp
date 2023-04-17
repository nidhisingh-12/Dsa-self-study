#include<iostream>
using namespace std;
int main()
{
    //sum of natural number
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // int sum = 0;
    // for(int i=1; i<=n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<sum<<endl; 

    /*---fibonacci series----*/
    // int n=10;
    // int a = 0;
    // int b = 1;
    // for(int i=1; i<=n; i++)
    // {
    //   int nextnumber = a+b;
    //   cout<<nextnumber<<" ";
    //   a = b;
    //   b = nextnumber;  
    // }   

    /*-----------prime number---------*/
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    
    bool isPrime = 1;

    for(int i=2; i<n; i++)
    {
        // rem =0 , not a prime
        if(n%i == 0)
        {
            isPrime = 0;
            break;
        }
        
    }
    if(isPrime == 0)
        {
            cout<<"Not a prime number"<<endl;
        }
        else{
            cout<<"is a prime number"<<endl;
        }
    return 0;
}