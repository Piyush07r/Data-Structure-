Enter the number :-10

*
**
***
****
*****
******
*******
********
*********
**********

CODE -

#include <iostream>
using namespace std;

void print1(int n )
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
            
        }
        cout<< endl;
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
