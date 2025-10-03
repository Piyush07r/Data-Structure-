Enter the number :-7
*******
******
*****
****
***
**
*

CODE :- 

#include <iostream>
using namespace std;
void print1(int n )
{
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";           
        }
        cout<< endl;
    }
    return;
}

int main() {
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    print1(n);
    return 0;
}
