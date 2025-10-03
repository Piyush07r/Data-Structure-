Enter the number :-5
1
22
333
4444
55555

  CODE -
  
#include <iostream>
using namespace std;

void print1(int n )
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;        
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
