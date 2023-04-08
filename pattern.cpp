#include<iostream>
using namespace std;
int main()
{
    /*---Rectangle pattern-----*/
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    /*-----rectangle using number (1111) etc*/
    // int m;
    // cin>>m;

    // for(int i=1; i<=m; i++)
    // {
    //    for(int j=1; j<=m; j++)
    //    {
    //     cout<<i<<" ";
    //    }
    //    cout<<endl;
    // }

    /*-----reverse order of number (54321)--*/
    // int t;
    // cin>>t;

    // for(int i=1; i<=t; i++)
    // {
    //     for(int j=1; j<=t; j++)
    //     {
    //         cout<<t-j+1<<" ";
    //     }
    //     cout<<endl;
    // }   

    /*----print natural number in square----*/
    int num;
    cin>>num;
    int count = 1;

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            cout<<count<<" ";
            count = count+1;

        }
        cout<<endl;
    }
    return 0;
}