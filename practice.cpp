#include<iostream>
using namespace std;
int main()
{
    int a, t1=0, t2 = 1, nextterm = 0;
    cout<<"enter the number of terms:";
    cin>>a;

    cout<<"Fibonacci Series: ";

    for(int i=1; i<=a; ++i)
    {
       if(i==1)
       {
        cout<<t1<<" ,";
        continue;
       }
       if(i==2)
       {
        cout<<t2<<" , ";
        continue;
       }
        
    nextterm = t1+t2;
    t1 = t2;
    t2 = nextterm;

    cout<<nextterm<<",";
    }
    
    return 0;
   
}
