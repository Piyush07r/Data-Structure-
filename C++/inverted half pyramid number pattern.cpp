Enter the number :-5
12345
1234
123
12
1

  CODE

#include <iostream>
using namespace std;

void print1(int n )
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
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
