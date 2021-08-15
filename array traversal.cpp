#include<iostream>
using namespace std;

int main()
{
	int arr[50],i,size;							  //declaration of arrray 
	
	cout <<"enter the size of an array :"<<endl;  //code to take size of array from user
	cin>>size;
	
	cout<<"Enter the array elements :"<<endl;     //code to take the elements of array from user
	for(i=0;i<size;i++){
		cin>>arr[i];
    }
	
	cout<<"elementa are as follow: "<<endl;       //code to print the given array by the user
	for(i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}
