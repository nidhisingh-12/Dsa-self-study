#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int fact;
    cin>>fact;
    
    int result = 1;
    if(fact==0)
    {
        
        cout<<1;
    }
    else if(fact < 0)
    {
      
        cout<<"Error";

    }
    else
    {
      for (int i = 1; i <= fact; i++) {
        result = result * i;
        
      }

      cout << result;
    }
    return 0;
}