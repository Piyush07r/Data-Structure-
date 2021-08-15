#include<iostream>
using namespace std;

int main()
{
	int arr[50],i,pos,size,num;					 //declaration of arrray 
	
		cout<<"enter the size of an array :"<<endl;
		cin>>size;
	if(size==50)							// conditon -> checking the size of array is valid or not
	{  
		cout<<"overflow ccondition"<<endl;
	}
	else{

	
		cout<<"Enter the array elementd :"<<endl;     //code to take the elements of array from user
		for(i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the array elements you want to insert"<<endl;
	cin>>num;
	
	cout<<"Enter the position u want to insert the number "<<endl;
	cin>>pos;
	
	if(pos<=0 || pos>size+1)
	{
		cout<<"invalid position"<<endl;
	}
	
	else{
		for(i=size-1; i>= pos-1;i--){					//code to insert number
			arr[i+1]=arr[i];
		}
		arr[pos-1]=num;
	}
	
		cout<<"elements are as follow: "<<endl;       //code to print the given array by the user
	for(i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	 
	 return 0;
}

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

