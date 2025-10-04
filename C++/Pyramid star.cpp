Enter the number :5
    *    
   ***   
  *****  
 ******* 
*********
***********

CODE

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print1(int n )
{
    for(int i=0;i<=n;i++){
        
        // space loop ( n-i-1)
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star loop
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //again space loop
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
    return;
}

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    print1(n);
    
    return 0;
}
