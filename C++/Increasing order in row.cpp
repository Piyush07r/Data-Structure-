Enter the number :-5
1
12
123
1234
12345

CODE -

#include <iostream>
using namespace std;
void print1(int n )
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j ;
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
