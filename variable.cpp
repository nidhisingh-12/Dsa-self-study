#include<iostream>
using namespace std;
int main()
{ 
    int a = 12;
    cout<<a<<endl;
    
    char b = 'v';
    cout<<b<<endl;

    bool bl = true;
    cout<<bl<<endl;

    float f = 1.2;
    cout<<f<<endl;

    double d = 1.23;
    cout<<d<<endl;

    int size = sizeof(a);
    int size1 = sizeof(d);
    cout<<"size of a is:"<<size<<endl;
    cout<<"size of d is :"<<size1<<endl;
    
    /*type-casting*/
    int c = 'a';
    cout<<c<<endl;

    char ch = 98;
    cout<<ch<<endl;

    return 0;
} 
